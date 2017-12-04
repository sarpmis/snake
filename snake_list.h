struct SnakeNode {
	int x;
	int y;
	int z;
	struct SnakeNode *prev;
};

// snake directions
enum direction{POSX, NEGX, POSY, NEGY, POSZ, NEGZ};

// snake variables
struct SnakeNode *head = NULL;
int snakeDirection = POSX;
int ateFood = 0;

// adds snake to the board
void addSnake(char* board){
	struct SnakeNode* temp = head;
	while(temp != NULL){
		addToBoard(board, temp->x, temp->y, temp->z);
		temp = temp->prev;
	}
}

void makeMove(){
	
}

void removeTail(){
	
}

void insertHead(){
	struct SnakeNode* temp = (struct SnakeNode*)malloc(sizeof(struct SnakeNode));
	temp->x = head->x;
	temp->y = head->y;
	temp->z = head->z;

	switch(snakeDirection){
		case POSX :
			temp->x = temp->x + 1;
		case NEGX :
			temp->x = temp->x - 1;
		case POSY :
			temp->y = temp->y + 1;
		case NEGY :
			temp->y = temp->y - 1;
		case POSZ :
			temp->z = temp->z + 1;
		case NEGZ :
			temp->z = temp->z - 1;
	}

	printf("snake at : %d, %d, %d\n", temp->x, temp->y, temp->z);
	temp->prev = head;
	head = temp;
	printf("head at : %d, %d, %d\n", head->x, head->y, head->z);
	printf("head prev at : %d, %d, %d\n", head->prev->x, head->prev->y, head->prev->z);
}

// returns true if a given coordinate contains the snake
int containsSnake(int x, int y, int z){
	struct SnakeNode* temp = head;
	while(temp != NULL){
		if (x == temp->x && y == temp->y && z == temp->z) {
			return 1;
		}
		temp = temp->prev;
	}
	return 0;
}