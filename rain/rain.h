void rainSetup(){

	// initialize rng
	time_t t;
	srand((unsigned) time(&t));
}

struct RainDrop{
	int dropX;
	int dropY;
	int dropZ;
}

struct RainDrop* drops[64];

void addDrops(char* board){
	int i;
	for(i = 0; i < 64; i++){
		struct RainDrop* temp = drops[i];
		if (temp != NULL){
			addToBoard(board, temp->dropX, temp->dropY, temp->dropZ);
		}
	}	
}

void moveDrops(){
	int i;
	for(i = 0; i < 64; i++){
		struct RainDrop* temp = drops[i];
		if (temp != NULL){
			if(temp->dropZ == 0) {
				drops[i] == NULL;
			} else{
				temp->dropZ = temp->dropZ - 1;
			}
		}
	}
}

void randomDrop(){
	int dropPos = rand() % 64;
	if(drops[dropPos] == NULL) {
		struct RainDrop drop;
		drop->dropX = dropPos / 8;
		drop->dropY = dropPos % 8;
		drop->dropZ = 7;
	}
}