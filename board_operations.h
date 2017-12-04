#define LOAD_PIN 12

char a[64] = {
	0x11, 0xff, 0xff, 0xff,
	0x00, 0x12, 0x22, 0x00,

	0x21, 0xff, 0xff, 0xff,     
	0xff, 0xff, 0xff, 0xff,

	0x31, 0xaa, 0xaa, 0xaa,
	0xaa, 0xaa, 0xaa, 0xaa,

	0x41, 0xaa, 0xaa, 0xaa,     
	0xaa, 0xaa, 0xaa, 0xaa,

 	0x51, 0xaa, 0xaa, 0xaa,
	0xaa, 0xaa, 0xaa, 0xaa,

	0x61, 0xaa, 0xaa, 0xaa,     
	0xaa, 0xaa, 0xaa, 0xaa,
	
	0x71, 0xaa, 0xaa, 0xaa,
	0xae, 0xaa, 0xaa, 0xaa,
	
	0x81, 0x02, 0x04, 0x08,     
	0x10, 0x20, 0x44, 0x84

	};

void drawBoard(char *board){
	pioInit();
	spiInit(244000, 0);

	pinMode(LOAD_PIN, OUTPUT);

	digitalWrite(LOAD_PIN, 1);
	int i = 0;
	for(i; i < 64; i++){
		spiSendReceive(board[i]);
	}
	digitalWrite(LOAD_PIN, 0);
}

void clearBoard(char* board){
	int i = 0;
	for(i; i < 64; i++){
		board[i] = 0x00;
	}
}

void addToBoard(char* board, int x, int y, int z){
	board[z*8 + y] |= (0x01 << x);
}

/////////////////// TESTING BELOW ///////////////////

void testRow(char* board, int y){
	printf("testing row\n");
	int x = 0;
	for (x; x < 8; x++){
		delayMillis(500);
		clearBoard(board);
		addToBoard(board, x, y, 7);
		drawBoard(board);
	}
	delayMillis(500);
}

void everythingOn(char* board){
	printf("everything is on\n");
	int x = 0;
	int y = 0;
	int z = 0;

	for(z; z < 8; z++){
		for(y; y  < 8; y++){
			for(x; x < 8; x++){
				addToBoard(board, x, y, z);
			}
		}
	}	
	drawBoard(board);
}
