#include<stdio.h>

void f1(){printf("f1\n");}
void f2(){printf("f2\n");}

main(){
	int cond1 = 0, cond2 = 1, n=3, i;
	_continue:
	for(i = 0; i < n; i++){
		f1();
		if(cond1) goto _break;
		f2();
		cond1 = 1;		
		if(cond2) goto _continue;
	}
	
	_break: ;
}


