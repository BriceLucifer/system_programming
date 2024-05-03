#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>

int main(){
	struct dirent *DIR_ENTRY;

	DIR *DIR_READER = opendir(".");
	if (DIR_READER == NULL){
		printf("Unable to read.\n");
		exit(1);
	}

	while((DIR_ENTRY = readdir(DIR_READER)) != NULL){
		printf("%s\n",DIR_ENTRY->d_name);
	}
	closedir(DIR_READER);
	return 0;
}
