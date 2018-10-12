///////////////////////////////////////////////////////////
// square_main.c
// Displays a sequence of hollow cubes of changing sizes
///////////////////////////////////////////////////////////

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

	while(1){
		clearBoard(board);
		addCube(board, &cube);
		drawBoard(board);
		expandCube(&cube);
		if(cubeOutOfBounds(&cube)) initializeCube(&cube);
		delayMillis(600);
	}
}
