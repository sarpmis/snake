struct SnakeNode {
	int x;
	int y;
	int z;
	struct SnakeNode *prev;
};

enum direction{POSX, NEGX, POSY, NEGY, POSZ, NEGZ};

struct SnakeNode *head = NULL;
int snake_direction = POSX;
int ateFood = 0;

void addSnake(char* board){
	struct SnakeNode* temp = head;
	while(temp != NULL){
		printf("Drawing snake");
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

	
}
