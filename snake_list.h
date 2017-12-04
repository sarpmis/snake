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

// prints the snake on the console
void printSnake(){
	struct SnakeNode* temp = head;
	printf("snake = ");
	while(temp != NULL){
		printf(" (%d, %d, %d)", temp->x, temp->y, temp->z);
		temp = temp->prev;
	}
	printf("\n");
}

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
	struct SnakeNode* temp = head;
	if(temp->prev == NULL) head = NULL;
	else {
		while(temp->prev->prev != NULL){
			temp = temp->prev;
		}
		temp->prev = NULL;
	}
}

void insertHead(){
	struct SnakeNode* temp = (struct SnakeNode*)malloc(sizeof(struct SnakeNode));
	temp->x = head->x;
	temp->y = head->y;
	temp->z = head->z;

	switch(snakeDirection){
		case POSX :
			temp->x = head->x + 1;
			break;
		case NEGX :
			temp->x = head->x - 1;
			break;
		case POSY :
			temp->y = head->y + 1;
			break;
		case NEGY :
			temp->y = head->y - 1;
			break;
		case POSZ :
			temp->z = head->z + 1;
			break;
		case NEGZ :
			temp->z = head->z - 1;
			break;
	}

	temp->prev = head;
	head = temp;
	printSnake();
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
