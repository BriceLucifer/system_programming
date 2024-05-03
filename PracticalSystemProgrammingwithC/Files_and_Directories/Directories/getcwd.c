#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	char DIR[2024];
	printf("Current working directory is : %s \n",getcwd(DIR,2024));
	return 0;
}
