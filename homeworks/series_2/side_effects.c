#include<stdio.h>
int f(int *value){ 
	*value = *value * 2;
	return *value; 
}

int g(int *value){ 
	*value = *value + 1;
	return *value; 
}

char letter(char *n){
	return *n;
}

main(){
	int my_value = 2;
	int res = f(&my_value)+g(&my_value);
	char c[] = "AB";
	char* n = c;
	printf("letter: %i \t %i\n", ++n ,letter(n)); 
	printf("letter: %i \t %i\n", ++n ,letter(n)); 
	
	printf("%i\n",res);
}
