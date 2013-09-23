#include<stdio.h>
#include<stdlib.h>


int str_len(char* str);

char* reverse(char* str){
	int i, j, len = str_len(str);
	char* new_str = malloc(sizeof(str)+1);		
	for(i = 0,j=len-1; *(str+i)!='\0'; i++,j--)
		*(new_str+j) = *(str+i);
	*(new_str+len) = '\0';
	return new_str;
}



main(){
	char hello[] = "Hello";

	printf("str len: %d\n", str_len(hello));
	printf("str reverse: %s\n", reverse(hello));
	
}

int str_len(char* str){
	int i;
	for(i = 0; *(str+i)!='\0'; i++);

	return i;
}
