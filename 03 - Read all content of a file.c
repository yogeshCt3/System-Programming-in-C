#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#define FILE_END -1
int main(){
	char path_[100];
	printf("enter the name of file you want to read : ");
	scanf("%s", &path_);
	int file_desc = open(path_, O_RDWR , 0777);
	if(file_desc == -1){
		printf("The file name does not exists !");
		return 0;
	}
	int state = 0;
	char buffer[2];
	while(state = read(file_desc, buffer, 1)){
		if(state == FILE_END){
			break;
		}
		write(1, buffer, 1);
	}
	return 0;
}