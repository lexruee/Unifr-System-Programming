#include <stdio.h>
int main(){
   	int n, i = 0;
	printf("> n = ");
	int d = scanf("%i",&n);

	if(d!=1)
		goto error;
		
	//enter goto loop
	rep:
	if(i < n){	
		printf("%i\n",i++);		
		goto rep; //repeat
	}
	printf("i_final = %i\n", i);
	return;

	error:
		printf("error\n");
}
