#include<stdio.h>
int test;

void t(){
	int test;
	printf("%i\n",test);
}

int main(){
	int test_2;
	printf("%i\n",test);
	printf("%i\n",test_2);
	t();
	return 0;
}
