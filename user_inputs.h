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
				*snake_dir = POSX;
				break;
			case 'y' :
				*snake_dir = NEGX;
				break;
			case 'g' :
				*snake_dir = POSY;
				break;
			case 'h' :
				*snake_dir = NEGY;
				break;
			case 'i' :
				*snake_dir = POSZ;
				break;
			case 'k' :
				*snake_dir = NEGZ;
				break;
		}
	}
}

