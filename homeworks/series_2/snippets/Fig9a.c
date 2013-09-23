/*---------------------------------------------------------------------------
Scan and print three times 'a string followed by an integer', including scan's 
result

Usage: fig9a < fig9a_input.txt

© Béat Hirsbrunner, University of Fribourg, Sept. 2011
---------------------------------------------------------------------------*/

#include <stdio.h>

int main() {
   printf("----- Fig. 9a: scan/print 3 times a string followed by an integer -----\n");
   char str[3]; int i, d;
   d = scanf("%s %i", str, &i); printf("d=%i: s=%s i=%i\n", d, str, i);
   d = scanf("%s %i", str, &i); printf("d=%i: s=%s i=%i\n", d, str, i);
   d = scanf("%s %i", str, &i); printf("d=%i: s=%s i=%i\n", d, str, i);
   
   return 0;
} 
