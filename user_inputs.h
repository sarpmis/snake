
void *t1(void *ptr){
	int *snake_dir;
	snake_dir = (int *)ptr;
	printf("%s \n", message);
	printf("thread done!\n");

	char c;
	while(1){
		c = getche();
		printf("\nYou typed: %c\n", c);
		if(c == 'q') break;

		switch(c){
			case 't' :
				snake_dir* = POSX;
				break;
			case 'y' :
				snake_dir* = NEGX;
				break;
			case 'g' :
				snake_dir* = POSY;
				break;
			case 'h' :
				snake_dir* = NEGY;
				break;
			case 'i' :
				snake_dir* = POSZ;
				break;
			case 'k' :
				snake_dir* = NEGZ;
				break;
		}
		printf("new direction is %d\n", snake_dir*);
	}
}

