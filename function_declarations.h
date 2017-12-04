// snake
void printSnake();

int snakeLength();

void addSnake(char* board);

int containsSnake(int x, int y, int z);

int containsSnakeBody(int x, int y, int z);

void insertHead();

void removeTail();

void makeMove();

// food
void randomFood();

void addFood(char* board);

int containsFood(int x, int y, int z);
