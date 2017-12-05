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
	int k = 5;
	int i;
	while(k > 0){
		moveDrops();
		printf("got here\n");
		for (i = 0; i < 5; i++){
			randomDrop();
		}
		addDrops(board);
		drawBoard(board);
		delayMillis(500);
		k--;
	}
}