int foodX;
int foodY;
int foodZ;

// initialize RNG
time_t t;
srand((unsigned) time(&t));

void randomizeCoordinates(){
	foodX = rand() % 8;
	foodY = rand() % 8;
	foodZ = rand() % 8;
	if(containsSnake(foodX, foodY, foodZ)){
		randomizeCoordinates();
	}
}

void drawFood(char* board){
	addToBoard(board, foodX, foodY, foodZ);
}

int containsFood(int x, int y, int z){
	return (x == foodX && y == foodY && z == foodZ);
}