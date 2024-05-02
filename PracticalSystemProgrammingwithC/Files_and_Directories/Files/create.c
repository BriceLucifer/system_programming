#include <stdio.h>
#include <stdio.h>
#include <fcntl.h>

int main(){
	int file_descriptor;
	char file_name[255];
	
	printf("Enter your filename:");
	scanf("%s",file_name);

	file_descriptor = creat(file_name,O_RDWR | O_CREAT);
	if(file_descriptor == -1){
		printf("unable to create\n");
	}else{
		printf("file %s is created successfully\n",file_name);
	}
}
