#include<stdio.h>
#define DO_NOT_SHOW_PROMPT 0
#define SHOW_PROMPT 1

int show_prompt(int show){
	if(show)
		printf("$ ");
	return 1;
}

void main(void){
	int c;
	char word[1024];
	int pos = 0;
	int show = SHOW_PROMPT;

	printf("a dummy prompt ;-)\n");
	while(show_prompt(show) && (c = getchar()) != EOF){
		if(c != '\n'){ // ignore line feed
			word[pos++] = c; // set char
			word[pos] = '\0'; // mark end of c string
			show = DO_NOT_SHOW_PROMPT; // do not show the prompt
		} else {
			printf(">> %s",word);
			printf("\n");
			// reset some values			
			show = SHOW_PROMPT;
			pos = 0;	
		}
	}

}
