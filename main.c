#include <stdio.h>
#include <stdlib.h>
#include "EasyPIO.h"
#include "board_operations.h"
#include "snake_list.h"



void main(void) {
	pioInit();
	spiInit(244000, 0);

	char board[64];

	// testRow(board, 0);

	int y = 0;
	for(y; y < 8; y++){
		addToBoard(board, y, 0, 7);
	}
	drawBoard(board);
	delayMillis(1000);	

	clearBoard(board);
	
	head = (struct SnakeNode*)malloc(sizeof(struct SnakeNode));
	head->z = 7;
	head->y = 0;
	head->x = 4;

	struct SnakeNode* temp = (struct SnakeNode*)malloc(sizeof(struct SnakeNode));
	temp->z = 7;
	temp->y = 0;
	temp->x = 3;
	head->prev = temp;
	addSnake(board);
	drawBoard(board);

	delayMillis(1000);

	snakeDirection = POSX;

	insertHead();
	clearBoard(board);
	addSnake(board);
	drawBoard(board);

	delayMillis(1000);
	insertHead();
	clearBoard(board);
	addSnake(board);
	drawBoard(board);

}

