#include <stdio.h>
int main(){
	int n;
	printf("> n = ");
	scanf("%i",&n);
	int low,high=n-1;
	printf("low_initial = %i\n",low);
	
	for(low=0; low <= high; low++)
		printf("%i\n",low);

	printf("low_final = %i\n", low);
}
