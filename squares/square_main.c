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

	int k = 10;
	while(k > 0){
		clearBoard(board);
		addCube(board, &cube);
		drawBoard(board);
		expandCube(&cube);
		if(cubeOutOfBounds(&cube)) initializeCube;
		delayMillis(1000);
		k--;
	}
}