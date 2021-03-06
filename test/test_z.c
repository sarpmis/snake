#include <stdio.h>
#include <stdlib.h>
#include "../EasyPIO.h"
#include "../board_operations.h"

void main(void) {
	initializeSPI();
	// start with a clean board
	char board[64];
	clearBoard(board);

	while(1) {
		int z;
		for(z = 0; z < 8; z++) {
			int x;
			for(x = 0; x < 8; x++){
				int y;
				for(y = 0; y < 8; y++){
					addToBoard(board, x, y, 7);
				}
			}
			printf("layer %d \n", z);
			drawBoard(board);
			delayMillis(1000);
			clearBoard(board);
		}
	}
}
