#include<stdio.h>

main(){

	int i = 32;
	for(; i <= 126; i++){
		char c = i;
		printf("%3i %6c\n",i,c);
	}
}
