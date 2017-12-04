int foodX;
int foodY;
int foodZ;

// initialize RNG
time_t t;
srand((unsigned) time(&t));

// puts food at a random point on the grid that does not
// contain snake
void randomFood(){
	foodX = rand() % 8;
	foodY = rand() % 8;
	foodZ = rand() % 8;
	if(containsSnake(foodX, foodY, foodZ)){
		randomizeCoordinates();
	}
}

void addFood(char* board){
	addToBoard(board, foodX, foodY, foodZ);
}

int containsFood(int x, int y, int z){
	return (x == foodX && y == foodY && z == foodZ);
}