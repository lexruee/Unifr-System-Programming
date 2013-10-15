#include<stdio.h>
#define swap(int,a,b)  a=a^b,b=a^b,a=a^b
main(){
	int a=1, b=2;
	if (a>b) swap(int,a,b);
	else a = b;
	printf("%d %d\n", a, b);
}
