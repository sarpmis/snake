#include <stdio.h>
#include <stdlib.h>
#include "../EasyPIO.h"
#include "../board_operations.h"
#include "rain.h"
void main(void){
	// Pi setup for SPI
	pioInit();
	spiInit(244000, 0);

	// initialize board
	char board[64];
	clearBoard(board);

	rainSetup();

	int k = 5;
	int i;
	while(k > 0){
		moveDrops();
		for (i = 0; i < 2; i++){
			randomDrop();
		}
		clearBoard(board);
		addDrops(board);
		drawBoard(board);
		delayMillis(50);
		k--;
	}
}