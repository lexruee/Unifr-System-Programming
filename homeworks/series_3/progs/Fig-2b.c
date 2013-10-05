#include<stdio.h>
/** this is a kickass state machine! */
main(int argc, char* argv[]){
	int i;
	if(argc==2 && (*argv[1]>='0' && *argv[1]<='9'))
		i = *argv[1] - '0';
	else goto end; 

	//jump/state table
	if(i==1) goto case_1;
	else if(i==2) goto case_2;
	else goto _default;	

	//cases
	case_1: printf("first case\n"); goto end;
	case_2: printf("second case\n"); goto end;
	_default: printf("other case\n"); goto end;
	
	end: ;  //do nothing
}

