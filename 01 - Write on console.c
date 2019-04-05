#include <string.h>
#include <unistd.h>
int main(){
	const char * message = "Hello There !";
	write(1, message , strlen(message));
	return 0;
}