#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "..\EasyPIO.h"
#include "..\board_operations.h"



void main(void) {
	initializeSPI();

	// start with a clean board
	char board[64];
	clearBoard(board);
}
