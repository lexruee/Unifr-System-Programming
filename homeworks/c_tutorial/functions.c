#include<stdio.h>
#include <stdlib.h>

int doubleMe(int value){
	return value*2;
}

int* map(int (*func)(int), int* values, int size){
	int* new_array = malloc(sizeof(int)*size);
	int i;
	for(i=0; i < size; i++){
		*(new_array+i) = func(*(values+i));
	}
	return new_array;
}

void each(void (*func)(int), int* values, int size){
	int i = 0;
	for(i = 0; i < size; i++){
		func(*(values+i));
	}
}

void printMe(int value){
	printf("value is: %d\n", value);
}

int squareMe(int value){
	return value*value;
}


void main(){
	int values[] = {1,4,5,2,9,6,12};
	int* new_values1 = map(&doubleMe, values,7);

	int* new_values2 = map(&squareMe, values,7);
	printf("double values\n");
	each(printMe,new_values1,7);
	printf("square values\n");
	each(printMe,new_values2,7);
	free(new_values1);
	free(new_values2);
}
