#include <stdio.h>
int main(){
   	int n, i = 0;
	printf("> n = ");
	scanf("%i",&n);	
	//enter goto loop
	rep:
	if(i < n){	
		printf("%i\n",i++);		
		goto rep; //repeat
	}
}
