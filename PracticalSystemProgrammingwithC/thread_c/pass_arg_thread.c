#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *sayGreeting(void *input){
	printf("Hello from %s\n",(char*)input);
	pthread_exit(NULL);
}

int main()
{
	// 输入姓名
	char name[50];
	printf("Enter your name: ");
	fgets(name,50,stdin);

	pthread_t thread;
	pthread_create(&thread,NULL,sayGreeting,name);
	pthread_join(thread,NULL);
}
