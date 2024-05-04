#include <unistd.h>

int main(){
	execlp("ls","ls","-al",NULL);
	// program from env , arg[0] ,arg[1] , arg[2]
	return 0;
}
