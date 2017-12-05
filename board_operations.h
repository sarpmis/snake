#define LOAD_PIN 12

// Send the board to the FPGA via SPI
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

// returns true if the given coordinates are not in the grid
int outOfBounds(int x, int y, int z){
	return (x > 7 || x < 0 || y > 7 || y < 0 || z > 7 || z < 0);
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
	int y = 0;
	int x = 0;
	int z = 0;
	for(z = 0; z < 8; z++){
		for(x = 0; x < 8; x++){
			for(y = 0; y < 8; y++){
				addToBoard(board, x, y, z);
			}
		}
	}
}

// a sample board state for testing
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