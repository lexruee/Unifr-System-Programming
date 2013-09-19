#include<stdio.h>

main(){
	int counts[256]; //char is one byte, so there are 255 possible values.
	
	int j;	
	for(j = 0; j < 256; j++){
		counts[j] = 0;
	}

	char c;
	while( (c = getchar()) != EOF){
		counts[c]++;
	}

	int i;
	printf("char\tcounts\n");
	for(i = 32; i <= 255; i++){
		if(counts[i]>0)
			printf(" %c \t %i\n",i,counts[i]);	
	}
}
