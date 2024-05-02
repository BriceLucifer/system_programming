#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
 * int access(const char* filepath,int amode)
 * amode :
 * 	R_OK readable? 
 * 	W_OK writable?
 * 	F_OK exist?
 * 	X_OK excutable?
 */

int main(){
	char filepath[100];
	printf("Enter the filename with path: ");
	scanf("%[^\n]%*c",filepath);

	int read_status,write_status,file_status;
	// 三种状态
	file_status = access(filepath,F_OK);

	if(file_status == -1){
		printf("File (%s) is not exist in location.\n",filepath);
		_exit(0);
	}
	/*
	 * success -> 0
	 * fail	   -> -1 
	 */
	read_status = access(filepath,R_OK);
	write_status = access(filepath,W_OK);
	if(read_status == 0 && write_status == 0){
		printf("%s File can both write and read.\n",filepath);
	}else if(read_status == 0 && write_status == -1){
		printf("%s File can only read.\n",filepath);
	}else if(read_status == -1 && write_status == 0){
		printf("%s File can only write.\n",filepath);
	}else{
		printf("%s File has no permission to read and write.\n",filepath);
	}
	
	return 0;
}
