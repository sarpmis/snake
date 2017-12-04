
void *t1(void *ptr){
	char *message;
	message = (char *)ptr;
	while(1){
		delayMillis(500);
		printf("%s \n", message);
	}
}

