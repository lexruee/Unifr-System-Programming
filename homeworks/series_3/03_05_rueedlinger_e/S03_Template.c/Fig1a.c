#include <stdio.h>

int main() {
   int low, high, n;

   printf("> n = ");   
   scanf("%i", &n);

   low = 0;
   high = n-1;   

   printf("low_initial = %i\n", low);
   while (low <= high) {
      printf("%i\n", low);
      ++low;
   } 
   printf("low_final = %i\n", low);
} 
