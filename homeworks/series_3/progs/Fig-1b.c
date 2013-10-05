#include<stdio.h>

main(){
	int n = 10;
	int low = 0, high = n - 1;
	do {
		printf("%i\n",low++);
	} while(low <= high);
}
