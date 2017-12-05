struct RainDrop{
	int dropX;
	int dropY;
	int dropZ;
	int on_board;
};

struct RainDrop* drops;

void rainSetup(){
	// initialize rng
	time_t t;
	srand((unsigned) time(&t));
	
	drops = malloc(64*sizeof(struct RainDrop));

	int i = 0;
	for(i = 0; i < 64; i++){
		drops[i].dropX = 0;
		drops[i].dropY = 0;
		drops[i].dropZ = 0;
		drops[i].on_board = 0;
	}
}

void addDrops(char* board){
	int i;
	for(i = 0; i < 64; i++){
		if (drops[i].on_board){
			addToBoard(board, drops[i].dropX, drops[i].dropY, drops[i].dropZ);
		}
	}	
}

void moveDrops(){
	int i;
	for(i = 0; i < 64; i++){
		if (drops[i].on_board == 1){
			if(drops[i].dropZ == 0) {
				drops[i].on_board = 0;
			} else{
				drops[i].dropZ = drops[i].dropZ - 1;
			}
		}
	}
}

void randomDrop(){
	int dropPos = rand() % 64;
	if(drops[dropPos].on_board == 0) {
		drops[dropPos].dropX = dropPos / 8;
		drops[dropPos].dropY = dropPos % 8;
		drops[dropPos].dropZ = 7;
		drops[dropPos].on_board = 1;
		// printf("(%d, %d, %d)\n", drops[dropPos].dropX, drops[dropPos].dropY, drops[dropPos].dropZ);
	}
}

void freeDrops(){
	free(drops);
}