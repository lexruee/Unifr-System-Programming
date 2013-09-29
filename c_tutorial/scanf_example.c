#include<stdio.h>

main(){
	char c[3];
	char s[3];
	int number1,number2;
	printf("enter two chars and a int\n");
	int d = scanf("%s %s",c,s);
	printf("you've enetered: %s %s, items=%d\n",c,s,d);
	d = scanf("%i %s",&number1,c);
	printf("items=%d\n",d);
}
