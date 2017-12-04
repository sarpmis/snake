#include <stdio.h>
#include <stdlib.h>
#include "EasyPIO.h"
#include "board_operations.h"
#include "snake_list.h"
#include "getch.h"
#include <pthread.h>
#include "user_inputs.h"




void main(void) {
	pioInit();
	spiInit(244000, 0);

	// char board[64];

	// // testRow(board, 0);

	// int y = 0;
	// for(y; y < 8; y++){
	// 	addToBoard(board, y, 0, 7);
	// }
	// drawBoard(board);
	// delayMillis(1000);	

	// clearBoard(board);
	
	// head = (struct SnakeNode*)malloc(sizeof(struct SnakeNode));
	// head->z = 7;
	// head->y = 0;
	// head->x = 4;

	// struct SnakeNode* temp = (struct SnakeNode*)malloc(sizeof(struct SnakeNode));
	// temp->z = 7;
	// temp->y = 0;
	// temp->x = 3;
	// head->prev = temp;
	// addSnake(board);
	// drawBoard(board);

	// delayMillis(1000);

	// snakeDirection = POSX;

	// insertHead();
	// clearBoard(board);
	// addSnake(board);
	// drawBoard(board);

	// delayMillis(1000);
	// insertHead();
	// clearBoard(board);
	// addSnake(board);
	// drawBoard(board);

	// delayMillis(1000);
	// removeTail();
	// clearBoard(board);
	// addSnake(board);
	// drawBoard(board);

	// delayMillis(1000);
	// removeTail();
	// clearBoard(board);
	// addSnake(board);
	// drawBoard(board);
	
	// delayMillis(1000);
	// removeTail();
	// clearBoard(board);
	// addSnake(board);
	// drawBoard(board);

	// delayMillis(1000);
	// removeTail();
	// clearBoard(board);
	// addSnake(board);
	// drawBoard(board);

	// printf("done\n");

	// char c;
	// printf("(getche example) please type a letter: ");
	// c = getche();
	// printf("\nYou typed: %c\n", c);
	// printf("(getch example) please type a letter...");
	// c = getch();
	// printf("\nYou typed: %c\n", c);

	pthread_t thread1;
	char *message1 = "thread 1";

	pthread_create(&thread1, NULL, t1, (void*) message1);
	pthread_join(thread1, NULL);
	printf("all done!\n");
}

