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
int playing = 0;

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

// returns the number of nodes in the snake
int snakeLength(){
	int length = 0;
	struct SnakeNode* temp = head;
	while(temp != NULL){
		length++;
		temp = temp->prev;
	}
	return length;
}

// adds snake to the board
void addSnake(char* board){
	struct SnakeNode* temp = head;
	while(temp != NULL){
		addToBoard(board, temp->x, temp->y, temp->z);
		temp = temp->prev;
	}
}

///////////////////////// COORDINATE CHECKS /////////////////////////

// returns true if a given coordinates contains the snake
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

// returns true if given coordinates contain snake excluding head
int containsSnakeBody(int x, int y, int z){
	if (head->prev == NULL) return 0;
	struct SnakeNode* temp = head->prev;
	while(temp != NULL){
		if (x == temp->x && y == temp->y && z == temp->z) {
			return 1;
		}
		temp = temp->prev;
	}
	return 0;
}

///////////////////////////// MOVEMENT /////////////////////////////

void insertHead(){
	if(head == NULL) return;

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
}

void removeTail(){
	if(head == NULL) return;

	struct SnakeNode* temp = head;

	if(temp->prev == NULL) head = NULL;
	else {
		while(temp->prev->prev != NULL){
			temp = temp->prev;
		}
		temp->prev = NULL;
	}
}

void makeMove(){
	insertHead();
	if(ateFood == 0){
		removeTail();
	}
	// did the snake die?
	if(containsSnakeBody(head->x, head->y, head->z) 
		|| outOfBounds(head->x, head->y, head->z)){
		playing = 0;
	}
	// did the snake eat food?
	if(containsFood(head->x, head->y, head->z)){
		ateFood = 1;
		randomFood();
	}
	ateFood = 0;
	printSnake();
}
