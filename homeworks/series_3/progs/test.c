#include<stdio.h>
main(){
	int i = 1;
	int cond1 = (i==1), cond2 = (i==2);
	
	while(cond1){
		printf("i==1\n");
		cond1 = 0;
		goto end;
	}

	while(cond2){
		printf("i==2\n");
		cond2 = 0;
		goto end;
	
	}

	end: return;
}
