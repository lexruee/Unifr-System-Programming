#include<stdio.h>

main(){
	int array[3] = {11,13,7};

	int *p = &array[0];
	int *q = &array[0];
	++q;

	printf("addr of p: %X \n",p);
	printf("addr of p+1: %X \n",p+1);	
	printf("addr of p+2: %X \n",p+2);

	void *v;
	v = &array[0];

	printf("%i\n",*(p++));
	printf("%i\n",*(p++));
	printf("%i\n",*(p));

	printf("%i\n",*q);

	int *k = v;

	printf("%i\n",*(k+1));
}
