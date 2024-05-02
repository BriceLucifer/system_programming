#include <unistd.h>
#include <stdio.h>

/*
 * int unlink(const char *pathname) [此处的pathname是要取消的linkfilename]
 * success -> 0
 * fail    -> -1
*/
int main(){
	int unlink_status;
	char linkfilename[50];

	printf("Enter the link name to unlink: ");
	scanf("%[^\n]%*c",linkfilename);

	unlink_status = unlink(linkfilename);
	if(unlink_status == 0){
		printf("File is unlinked successfully!\n");
	}else{
		printf("Unable to unlink the file...\n");
	}

	return 0;
}
