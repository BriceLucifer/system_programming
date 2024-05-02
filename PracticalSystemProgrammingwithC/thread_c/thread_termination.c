#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <stdlib.h>

void *customThreadFunction(){
	for(int i = 0 ; i < 5; i++){
		printf("I am a customThreadFunction created by Programmer\n");
		sleep(1);
		if ( i == 3){
			printf("My JOB is done , I am being terminated by Programmer\n");
			pthread_exit(NULL);
		}
	}
	return NULL;
}
 
int main(){
	pthread_t thread;
	pthread_create(&thread,NULL,customThreadFunction,NULL);
	for(int i = 0; i < 5; i++){
		printf("I am the process thread created by compiler by default\n");
		sleep(1);
	}
	return 0;
}
