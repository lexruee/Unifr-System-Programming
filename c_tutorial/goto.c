#include<stdio.h>

main(){
	int c = 0;
	if(0){
		hello:
		printf("hello\n");
		c++;
	}

	if(c < 10)
		goto hello;
}
