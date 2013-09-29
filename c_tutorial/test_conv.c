#include<stdio.h>

main(){
	int i = 10;
	long l = 100;
	short s = 9;
	double d = 10.01;
	int k = d;	
	l = s;
	double f = 10.21319;
	float  dd = f;
	
	printf("%d\n",s);
	printf("%d\n",k);
	printf("%G\n",dd);
	printf("%G\n",f);
}
