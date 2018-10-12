#include <stdio.h>
#include <stdlib.h>
#include "../EasyPIO.h"
#include "../board_operations.h"

void main(void) {
	initializeSPI();
	// start with a clean board
	char board[64];
	clearBoard(board);

	int z = 0;
	for(z; z < 8; z++) {
		int x;
		for(x; x < 8; x++){
			int y;
			for(y; y < 8; y++){
				addToBoard(board, x, y, z);
			}
		}
		printf("layer %d", z);
		drawBoard(board);
		delayMillis(1000);
		clearBoard(board);
	}
}