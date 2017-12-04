
void *t1(void *ptr){
	char *message;
	message = (char *)ptr;
	printf("%s \n", message);
	printf("thread done!\n");
	
	while(1){
		delayMillis(500);
		printf("%s \n", message);
	}
}

