#include "kr058.c"
#include<stdio.h>
main(){
	int n, p;
	scanf("%i",&n);

	int pos, i, numbers[n], positions[n];	
	
	int d;
	for(i = 0; i < n; i++){
		d = scanf("%i %i",&numbers[i],&positions[i]);
		if(d < 2){
			while(getchar()!='\n');	
		}
	}

	printf("test:\n");
	int check;
	for(i=0; i < n; i++){
		pos = binsearch(numbers[i], numbers, n);
		check = pos == positions[i]; 
		printf("find %i \t res pos: %i \t expect: %i \t test: %i\n",numbers[i],pos,positions[i],check);
	}

	

}
