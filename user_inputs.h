
void *t1(void *ptr){
	char *message;
	message = (char *)ptr;
	printf("%s \n", message);
	printf("thread done!\n");

	char c;
	while(1){
		c = getche();
		printf("\nYou typed: %c\n", c);
	}
}

