#include<stdio.h>

int fib(int);

main(){
	char c;
	while((c = getchar()) != EOF){
		if(c - '0' >= 0 && c - '0' <= 9){
			int num = c - '0';		
			printf("fib(%i)=%i\n",num,fib(num));
		} 
	}


}

int fib(int n){
	int i = 0, fib1 = 0, fib2 = 1, tmp = 0;
	
	for(i = 0; i <n; i++){
		tmp = fib2;
		fib2 = fib1 + fib2;
		fib1 = tmp;
	}
	return fib1;
}
