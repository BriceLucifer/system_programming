#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char filename[255];
	printf("Enter the filename to open\n");
	scanf("%[^\n]%*c",filename);
	int file_descriptor = open(filename,O_WRONLY | O_CREAT | O_APPEND,0777);

	if(file_descriptor == -1){
		perror("File not found");
		exit(1);
	}

	char content[1024];
	printf("Enter the content you want to write on a given file:");
	scanf("%[^\n]%*c",content);

	int size = write(file_descriptor,content,strlen(content));
	printf("%d",size);
	close(file_descriptor);
	return 0;
}
