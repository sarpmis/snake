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
	initTermios(1);

	// set up SPI connection between Pi and FPGA
	initializeSPI();

	// start with a clean board
	char board[64];
	clearBoard(board);

	// initialize RNG for foods
	time_t t;
	srand((unsigned) time(&t));
	
	// turn all lights on until user selects speed 
	everythingOn(board);
	drawBoard(board);
	delayMillis(2000);

	// user selects the speed (the delay between moves)
	int gameSpeed;
	speedSelect(&gameSpeed);

	// thread to handle user inputs during game
	pthread_t input_thread;
	pthread_create(&input_thread, NULL, getUserInputs, (void*) &snakeDirection);

	// clear the board
	clearBoard(board);
	drawBoard(board);
	
	// snake initialize animation
	initializeSnake(board, &gameSpeed, 4);

	// place food
	randomFood();

	// start the game
	playing = 1;
	// game loop
	while(playing) {
		delayMillis(gameSpeed);
		makeMove();
		clearBoard(board);
		addSnake(board);
		addFood(board);
		drawBoard(board);
	}

	// cancel the user input thread when game is over
	pthread_cancel(input_thread);
	printf("Game over.\n");
	printf("Your score was = %d\n", snakeLength());

	// free the memory to avoid memory leaks
	freeSnake();
}
