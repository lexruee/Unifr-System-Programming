#include <stdio.h>

int main() {
   int i;

   printf("> i = ");   
   while (scanf("%i", &i) < 1) {  // error treatment
      while (getchar() != '\n') ; // skip the rest of the input line
      printf("input error, try again\n");
      printf("> i = ");
   }

   switch (i) {
      case 1:  printf("first case \n"); break;
      case 2:  printf("second case \n"); // beware: no break !!
      default: printf("other cases \n"); break;
   }  
}
