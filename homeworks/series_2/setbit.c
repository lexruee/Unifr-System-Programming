#include<stdio.h>

unsigned long setbit(unsigned long x, int n){
	return x | (1UL<<n);
}

main(){
	unsigned long t = 0;
	unsigned long k = setbit(t,2); //0000 => 0100
	printf("%lu\n",k); //4

}
