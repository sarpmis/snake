// wait for user input from console to change snake direction
// pointer to the function to send it to new thread
void *getUserInputs(void *ptr){
	int *snake_dir;
	snake_dir = (int *)ptr;
	// printf("input thread started!\n");

	char c;
	while(1){
		c = getch();
		if(c == 'q') break;

		switch(c){
			case 'a' :
				// can't do a 180 turn!
				if(*snake_dir != NEGX)
					*snake_dir = POSX;
				break;
			case 'd' :
				if(*snake_dir != POSX)
					*snake_dir = NEGX;
				break;
			case 's' :
				if(*snake_dir != NEGY)
					*snake_dir = POSY;
				break;
			case 'w' :
				if(*snake_dir != POSY)
					*snake_dir = NEGY;
				break;
			case 'i' :
				if(*snake_dir != NEGZ)
					*snake_dir = POSZ;
				break;
			case 'k' :
				if(*snake_dir != POSZ)
					*snake_dir = NEGZ;
				break;
		}
	}
}

void eraseLastChar(){
	printf("\b");
	printf(" ");
}

// user selects game speed or quits
void speedSelect(int *gameSpeed){
	int choosing = 1;
	char ch;
	printf("Select game speed: \n's' for snail, 'd' for dragon, 'i' for insane\n");
	while(choosing){
		ch = getch();
		switch(ch){
			case 's' :
				*gameSpeed = 1000;
				choosing = 0;
				eraseLastChar();
				printf("Snail it is! \n");
				break;
			case 'd' :
				*gameSpeed = 350;
				choosing = 0;
				printf("Dragon it is!\n");
				break;
			case 'i' :
				*gameSpeed = 120;
				choosing = 0;
				printf("Insane!!!\n");
				break;
			default :
				printf("That's not a valid selection!\n");
				break;
		}
	}
}

