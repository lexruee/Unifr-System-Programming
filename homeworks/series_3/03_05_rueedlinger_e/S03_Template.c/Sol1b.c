#include <stdio.h>
int main(){
	int n;
	printf("> n = ");
	scanf("%i",&n);
   	int low = 0, high = n - 1;
	printf("low_initial = %i\n",low);
	do {
		printf("%i\n",low++);
	} while(low <= high);
	printf("low_final = %i\n", low);
}
