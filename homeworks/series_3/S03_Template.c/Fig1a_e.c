#include <stdio.h>

int main() {
   int low, high, n;

   printf("> n = ");   
   while (scanf("%i", &n) < 1) {  // error treatment
      while (getchar() != '\n') ; // skip the rest of the input line
      printf("input error, try again\n");
      printf("> n = ");
   }
      
   low = 0;
   high = n-1;   

   printf("low_initial = %i\n", low);
   while (low <= high) {
      printf("%i\n", low);
      ++low;
   } 
   printf("low_final = %i\n", low);
} 
