#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "EasyPIO.h"
#include "function_declarations.h"
#include "board_operations.h"
#include "food.h"
#include "snake_list.h"
#include "getch.h"
#include "user_inputs.h"

void main(void) {
	// thread to handle user inputs
	pthread_t input_thread;
	pthread_create(&input_thread, NULL, getUserInputs, (void*) &snakeDirection);
	
	// Raspberry Pi setup for SPI
	pioInit();
	spiInit(244000, 0);

	// start with a clean board
	char board[64];
	clearBoard(board);

	// initialize RNG for foods
	time_t t;
	srand((unsigned) time(&t));
	
	everythingOn(board);
	drawBoard(board);
	delayMillis(2000);

	head = (struct SnakeNode*)malloc(sizeof(struct SnakeNode));
	head->z = 7;
	head->y = 3;
	head->x = 1;

	struct SnakeNode* temp = (struct SnakeNode*)malloc(sizeof(struct SnakeNode));
	temp->z = 7;
	temp->y = 3;
	temp->x = 0;
	head->prev = temp;
	addSnake(board);
	drawBoard(board);

	// place food
	randomFood();

	// start the game
	playing = 1;

	// game loop
	while(playing) {
		delayMillis(1000);
		makeMove();
		clearBoard(board);
		addSnake(board);
		addFood(board);
		drawBoard(board);
	}

	// cancel the user input thread when game is over
	pthread_cancel(input_thread);
	printf("Haha you died!\n");
}
