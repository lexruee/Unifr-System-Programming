#include <stdio.h>

int main() {
   int i, n;

   printf("> n = ");
   while (scanf("%i", &n) < 1) {  // error treatment
      while (getchar() != '\n') ; // skip the rest of the input line
      printf("input error, try again\n");
      printf("> n = ");
   }

   for (i = 0; i < n; i++) {
      printf("%i\n", i);
   }
   printf("i_final = %i\n", i);
}
 
