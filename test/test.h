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

void addLine(char* board){
	// connect adjacent vertices with lines
	// if two points have two attributes the same,
	// they are adjacent
	int i;
	int j;
	clearBoard(board);
	for (i = 0; i < 8; i++) {
		addToBoard(board,i,4,4);
	}
}