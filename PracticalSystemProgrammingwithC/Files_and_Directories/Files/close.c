#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
int main(){
	int file_descriptor;
	char filename[255];

	printf("Enter the filename\n");
	scanf("%s",filename);

	// set permission to read and write!!
	file_descriptor = open(filename,O_RDWR,0);

	if(file_descriptor != -1){
		printf("%s is opened successfully!!!\n",filename);
	}else{
		printf("Unable to open %s!!!\n",filename);
	}

	int close_status = close(file_descriptor);
	/* #include <unist.h>
	 * close(int file_descriptor) -> int 
	 * return a close_status 
	 * 0 -> closed successfully
	 * -1 -> Unable to close
	*/
	if(close_status == 0){
		printf("file %s is closed successfully\n",filename);
	}else{
		printf("file %s is not closed\n",filename);
	}

	return 0;
}
