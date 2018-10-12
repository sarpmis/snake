#include <stdio.h>
#include <stdlib.h>
#include "../EasyPIO.h"
#include "../board_operations.h"

void main(void) {
	initializeSPI();
	// start with a clean board
	char board[64];
	clearBoard(board);
	
	int z = 7;
	while(1) {
		int x;
		int y;
		for(x = 0; x < 8; x++) {
			for(y = 0; y < 8; y++) {
				addToBoard(board, x, y, z);
			}
		}
		printf("row %d \n", x);
		drawBoard(board);
		delayMillis(500);
		clearBoard(board);
	}
}