#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main(){
	DIR *DIR_READER = opendir(".");
	if(DIR_READER == NULL){
		printf("Could not open current directory.\n");
		exit(1);
	}

	int status = closedir(DIR_READER);
	if(status == 0){
		printf("directory is successfully closed.\n");
	}else{
		printf("Unable to close directory.\n");
	}
	return 0;
}
