#include <stdio.h>

int main() {
   int i;

   printf("> i = ");   
   scanf("%i", &i);

   switch (i) {
      case 1:  printf("first case \n"); break;
      case 2:  printf("second case \n"); // beware: no break !!
      default: printf("other cases \n"); break;
   }  
}
