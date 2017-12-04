#include <stdio.h>
#include <stdlib.h>
#include "EasyPIO.h"
#include "board_operations.h"
#include "snake_list.h"
#include "getch.h"
#include <pthread.h>
#include "user_inputs.h"




void main(void) {
	// thread to handle user inputs
	pthread_t thread1;
	pthread_create(&thread1, NULL, t1, (void*) &snakeDirection);
	pthread_join(thread1, NULL);
	
	// main thread runs the game
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

	snakeDirection = POSX;

	while(1) {
		delayMillis(1000);
		insertHead();
		removeTail();
		clearBoard(board);
		addSnake(board);
		drawBoard(board);
	}
	printf("done\n");
}

