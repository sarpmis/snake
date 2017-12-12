///////////////////////////////////////////////////////////
// test_main.c
// Tests a couple lights on the cube
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "../EasyPIO.h"
#include "../board_operations.h"
#include "test.h"


void main(void) {
	initializeSPI();

	// start with a clean board
	char board[64];
	clearBoard(board);

	struct Point point;
	initPoint(&point);
	
	while(1){
		clearBoard(board);
		addLine(board,&point);
		movePoint(&point);
		drawBoard(board);
		delayMillis(100);
	}
}