#include<stdio.h>
#define swap(int,a,b) a=a^b; b=a^b; a=a^b
main(){
	int a=1, b=2;
	swap(int,a,b);
	printf("%d %d\n", a, b);
}
