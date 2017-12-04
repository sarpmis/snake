#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "EasyPIO.h"
#include "board_operations.h"
#include "snake_list.h"
#include "getch.h"
#include "user_inputs.h"
#include "food.h"

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
	
	int y = 0;
	for(y; y < 8; y++){
		addToBoard(board, y, 0, 7);
	}
	drawBoard(board);
	delayMillis(1000);	

	head = (struct SnakeNode*)malloc(sizeof(struct SnakeNode));
	head->z = 7;
	head->y = 0;
	head->x = 4;

	struct SnakeNode* temp = (struct SnakeNode*)malloc(sizeof(struct SnakeNode));
	temp->z = 7;
	temp->y = 0;
	temp->x = 3;
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
		addFood();
		drawBoard(board);
	}

	// cancel the user input thread when game is over
	pthread_cancel(input_thread);
	printf("Haha you died!\n");
}
