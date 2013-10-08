#include <stdio.h>

int main() {
   int i, n;

   printf("> n = ");
   scanf( "%i", &n);

   for (i = 0; i < n; i++) {
      printf("%i\n", i);
   }
   printf("i_final = %i\n", i);
}
 
