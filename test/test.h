///////////////////////////////////////////////////////////
// test.h
// Methods for lighting a couple points up
///////////////////////////////////////////////////////////

struct Point{
	int x;
	int y;
	int z;
};

struct Line{
	struct Point* points;
};

void initPoint(struct Point* point) {
	point = malloc(sizeof(struct Point));
	point.x = 0;
	point.y = 0;
	point.z = 0;
}

void addLine(char* board, struct Point* point){
	// connect adjacent vertices with lines
	// if two points have two attributes the same,
	// they are adjacent
	int i;
	int j;
	clearBoard(board);
	for (i = 0; i < 8; i++) {
		addToBoard(board,i,point.y,point.y);
	}
}

void movePoint(struct Point* point) {
	point.y = (point.y +1)%8;
	point.z = (point.z +1)%8;
}