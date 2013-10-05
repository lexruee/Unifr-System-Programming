#include<stdio.h>

main(){
	char string[100];
	char c;
	int i = 0;
	while(scanf("%c",&c) != EOF){ //read each char
		switch(c){
			case '\n': //new line
				string[i] = '\0';
				i = 0;	
				break;
			default:
				string[i++] = c;
				break;
		}
	}
	printf("%s\n",string);
	printf("eof!\n");
}

