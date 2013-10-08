#include <stdio.h>
int main(){
   	int i;
	printf("> i = ");
	int d = scanf("%i",&i);

	if(d!=1)	
		goto error;		

	//jump/state table
	if(i==1) goto case_1;
	else if(i==2) goto case_2;
	else goto _default;	

	//cases
	case_1: printf("first case\n"); goto end;
	case_2: printf("second case\n"); goto end;
	_default: printf("other case\n"); goto end;
	
	end: ;  //do nothing  

	return;

	error:
		printf("error\n");
}
