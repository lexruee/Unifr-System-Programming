#define MAX_LENGTH 20
#include<stdio.h>

main(){
	char c;
	char s[MAX_LENGTH];
	float f;
	printf("please enter a char, a string and a float value:\n");
	scanf("%c %s %f",&c,s,&f);
	printf("c=%c \t s=%s \t f=%f\n",c,s,f);
}
