#include<stdio.h>

int test_func(int);

main(){
	int max = 5;
	int list[max];
	int res[max];
	int i=0,d=0;

	for(i=0; i < max; i++){
		d = scanf("%i %i",&list[i],&res[i]);
		if(d<2){
			while(getchar()!='\n');
			goto error;
		}
	}

	int sw;
	
	for(i=0; i < max; i++){
		sw = res[i] == list[i];
		char s[] = "hsdhdsj"; 

		printf("%i=f(%i), error: %i\n",res[i],list[i],sw);
	}
	
	return;

	error:
		printf("error\n");

}


int test_func(int i){
	return i << 1;
}

