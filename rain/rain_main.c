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


	printf("starting loop\n");
	int i = 5;
	while(i > 0){
		moveDrops();
		int i;
		for (i = 0; i < 5; i++){
			randomDrop();
		}
		addDrops(board);
		drawBoard(board);
		delayMillis(500);
		i--;
	}
}