struct Point{
	int x;
	int y;
	int z;
};

struct Cube{
	struct Point* points;
};

void initializeCube(struct Cube* cube){
	cube->points = malloc(8*sizeof(struct Point));

	cube->points[0].x = 4;
	cube->points[0].y = 4;
	cube->points[0].z = 4;

	cube->points[1].x = 3;
	cube->points[1].y = 4;
	cube->points[1].z = 4;

	cube->points[2].x = 4;
	cube->points[2].y = 3;
	cube->points[2].z = 4;

	cube->points[3].x = 3;
	cube->points[3].y = 3;
	cube->points[3].z = 4;

	cube->points[4].x = 4;
	cube->points[4].y = 4;
	cube->points[4].z = 3;

	cube->points[5].x = 3;
	cube->points[5].y = 4;
	cube->points[5].z = 3;

	cube->points[6].x = 4;
	cube->points[6].y = 3;
	cube->points[6].z = 3;

	cube->points[7].x = 3;
	cube->points[7].y = 3;
	cube->points[7].z = 3;
}

// void expandCube(struct Cube* cube){
// 	cube->points[0].x = 4;
// 	cube->points[0].y = 4;
// 	cube->points[0].z = 4;

// 	cube->points[1].x = 3;
// 	cube->points[1].y = 4;
// 	cube->points[1].z = 4;

// 	cube->points[2].x = 4;
// 	cube->points[2].y = 3;
// 	cube->points[2].z = 4;

// 	cube->points[3].x = 3;
// 	cube->points[3].y = 3;
// 	cube->points[3].z = 4;

// 	cube->points[4].x = 4;
// 	cube->points[4].y = 4;
// 	cube->points[4].z = 3;

// 	cube->points[5].x = 3;
// 	cube->points[5].y = 4;
// 	cube->points[5].z = 3;

// 	cube->points[6].x = 4;
// 	cube->points[6].y = 3;
// 	cube->points[6].z = 3;

// 	cube->points[7].x = 3;
// 	cube->points[7].y = 3;
// 	cube->points[7].z = 3;
// }

void addCube(char* board, struct Cube* cube){
	// connect adjacent vertices with lines
	// if two points have two attributes the same,
	// they are adjacent
	int i;
	int j;
	for(i = 0; i < 8; i++){
		for(j = 0; j < 7-i; j++){
			if(cube->points[i].x == cube->points[j].x 
				&& cube->points[i].y == cube->points[j].y){
				int maxZ;
				int minZ; 
				if(cube->points[i].z > cube->points[j].z){
					maxZ = cube->points[i].z;
					minZ = cube->points[j].z;
				} else {
					maxZ = cube->points[j].z;
					minZ = cube->points[i].z;
				}
				while(maxZ >= minZ){
					addToBoard(board, cube->points[i].x, cube->points[i].y, maxZ);
					maxZ--;
				}
			}
			if(cube->points[i].x == cube->points[j].x 
				&& cube->points[i].z == cube->points[j].z){
				int maxY;
				int minY;
				if(cube->points[i].y > cube->points[j].y){
					maxY = cube->points[i].y;
					minY = cube->points[j].y;
				} else {
					maxY = cube->points[j].y;
					minY = cube->points[i].y;
				}
				while(maxY >= minY){
					addToBoard(board, cube->points[i].x, maxY, cube->points[i].z);
					maxY--;
				}
			}
			if(cube->points[i].y == cube->points[j].y 
				&& cube->points[i].z == cube->points[j].z){
				int maxX;
				int minX;
				if(cube->points[i].x > cube->points[j].x){
					maxX = cube->points[i].x;
					minX = cube->points[j].x;
				} else {
					maxX = cube->points[j].x;
					minX = cube->points[i].x;
				}
				while(maxX >= minX){
					addToBoard(board, maxX, cube->points[i].y, cube->points[i].z);
					maxX--;
				}
			}
		}
	}
}