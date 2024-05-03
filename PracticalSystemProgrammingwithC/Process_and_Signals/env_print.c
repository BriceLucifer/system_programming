#include <stdio.h>
#include <stdlib.h>

int main(){
	char environment_name[50];
	printf("Enter the environment_name :");
	scanf("%s",environment_name);
	printf("environment value is %s.\n",getenv(environment_name));

	return 0;
}
