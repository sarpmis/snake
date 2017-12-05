struct Point{
	int x;
	int y;
	int z;
}

struct Cube{
	struct Point* points;
};

void initializeCube(struct Cube* cube){
	cube->points = malloc(8*sizeof(struct Point));
}