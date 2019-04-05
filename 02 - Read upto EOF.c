#include <unistd.h>
// ASCII code for ESC key
#define ESC 27

int main(){
	char buffer[2];
	while(read(0, buffer, 1)){
		write(1, buffer, 1);
		if(buffer[0] == '.') // terminate the processe once '.' is encountered !
			break;
	}
	return 0;
}