#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "../EasyPIO.h"
#include "../board_operations.h"
#include "square.h"


void main(void) {
	initializeSPI();

	// start with a clean board
	char board[64];
	clearBoard(board);

	struct Cube cube;
	initializeCube(&cube);

	addCube(board, &cube);

	addToBoard(board,0,0,0);
	drawBoard(board);

	delayMillis(2000);

	expandCube(&cube);
	addCube(board, &cube);

	drawBoard(board);
}