#include<stdio.h>
main(){
	int k = 1;
	int* p = &k;
	

	printf("%i\n",*&*&*p);

}
