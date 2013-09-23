/*---------------------------------------------------------------------------
Program for Figures 1 to 5 of Series 2, September 2013

Usage: fig1-5

© Béat Hirsbrunner, University of Fribourg, Sept. 12, rev. Sept. 13
---------------------------------------------------------------------------*/


#include <stdio.h>

#define AT '\100'    // constant in octal

int main() {
   printf("----- Figure 1, Exercice 1 -----\n");
   char c='A'; int i=65; float pi=3.14;
   printf("%c %i\n", c, c);
   printf("%c %i\n", i, i); 
   printf("%f %i\n", pi, (int)pi);
   
   printf("----- Figure 2, Exercice 2 -----\n");
   char at = '\x40';    // variable in hexadecimal
   printf("%c %i %o %x\n", '@', '@', '@', '@');
   printf("%c %i %o %x\n", AT, AT, AT, AT);
   printf("%c %i %o %x\n", at, at, at, at);

   printf("----- Figure 3, Exercice 3 -----\n");
   enum {FALSE, TRUE} b; // declaration of vaiable b, without tag;
   b = TRUE;
   printf("%i %i\n", b, FALSE);

   enum color_tag {RED, GREEN, BLUE}; // enum declaration, with tag 'color_tag'
   enum color_tag c1, c2, c3; // declaration of variables ci   
   c1 = RED; c2 = c1+1; c3 = BLUE;
   printf("%i %i %i\n", c1, c2, c3);
    
   printf("----- Figure 4, Exercice 4 -----\n");
   int p, q;  
   printf("p||!q  p&&(p==q)  (p&&(p=q)) || (p=!q)   p\n");
   printf("-----  ---------  --------------------   -\n");
   p=0; q=0;
   printf("  %i       %i              %i               %i\n", p||!q,  p&&(p==q),  (p&&(p=q)) || (p=!q),  p);
   p=0; q=1;
   printf("  %i       %i              %i               %i\n", p||!q,  p&&(p==q),  (p&&(p=q)) || (p=!q),  p);
   p=1; q=0;
   printf("  %i       %i              %i               %i\n", p||!q,  p&&(p==q),  (p&&(p=q)) || (p=!q),  p);
   p=1; q=1;
   printf("  %i       %i              %i               %i\n", p||!q,  p&&(p==q),  (p&&(p=q)) || (p=!q),  p);
  
   printf("----- Figure 5, Exercice 5 -----\n");
   int x=3, y=2;
   printf("%i\n", (x < y) ? x : y);
       
   return 0;
} 
