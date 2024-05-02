#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

// arguments from user
int main(int argc,char *argv[]){
	/* 
	 * #include <unistd.h>
	 * read(int file_descriptor,void *buffer,size_t size) -> size_t
	 * success -> size_t
	 * fail -> -1
	 */
	int file_descriptor,size;
	char *file_name = argv[1];
	char *content = (char*)calloc(100,sizeof(char));

	file_descriptor = open(file_name,O_RDONLY);
	//program exit if the given file is not found
	if (file_descriptor == -1){
		perror("File not found");
		exit(1);
	}

	size = read(file_descriptor,content,100);
	printf("Number of bytes returned are : %d\n",size);
	content[99] = '\0';
	printf("file content is: %s",content);

	return 0;
}
