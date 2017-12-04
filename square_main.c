#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "..\EasyPIO.h"
#include "..\board_operations.h"



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
}
