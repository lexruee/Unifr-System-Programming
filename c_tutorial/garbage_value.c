#include<stdio.h>

void test(){
	int g;
	printf("garbage value %i\n",g);
}

main(){
	int g;
	printf("garbage value %i\n",g);
	test();
}
