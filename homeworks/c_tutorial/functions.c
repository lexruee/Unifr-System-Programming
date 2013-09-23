#include<stdio.h>
#include <stdlib.h>

int doubleMe(int value){
	return value << 1; //the same as value * 2
}

int* map(int (*func)(int), int* values, int size){
	int* new_array = malloc(sizeof(int)*size);
	int i;
	for(i=0; i < size; i++){
		*(new_array+i) = func(*(values+i));
	}
	return new_array;
}

int reduce(int (*func)(int,int), int* values, int size){
	int acc;
	int i = 0;
	for(i = 0; i < size; i++){
		int v = *(values+i);
		acc = func(v,acc);	
	}

	return acc;
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

int sumIter(int v, int acc){
	return acc +v;
}

int facIter(int v, int acc){
	if(!acc)
		acc = 1;
	return acc*v;
}

void main(){
	int values[] = {1,4,5,2,9,6,12};
	int values1[] = {1,2,3,4,5};
	int* new_values1 = map(&doubleMe, values,7);

	int* new_values2 = map(&squareMe, values,7);
	
	int res = reduce(&sumIter,values1,5);
	printf("reduce, sum, res: %d\n",res);

	res = reduce(&facIter,values1,5);
	printf("reduce, fac, res: %d\n",res);
	
	printf("double values\n");
	each(printMe,new_values1,7);
	printf("square values\n");
	each(printMe,new_values2,7);
	free(new_values1);
	free(new_values2);
}
