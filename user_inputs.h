// wait for user input from console to change snake direction
void *getUserInputs(void *ptr){
	int *snake_dir;
	snake_dir = (int *)ptr;
	printf("input thread started!\n");

	char c;
	while(1){
		c = getche();
		// printf("\nYou typed: %c\n", c);
		if(c == 'q') break;

		switch(c){
			case 't' :
				// can't do a 180 turn!
				if(*snake_dir != NEGX)
					*snake_dir = POSX;
				break;
			case 'y' :
				if(*snake_dir != POSX)
					*snake_dir = NEGX;
				break;
			case 'g' :
				if(*snake_dir != NEGY)
					*snake_dir = POSY;
				break;
			case 'h' :
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

