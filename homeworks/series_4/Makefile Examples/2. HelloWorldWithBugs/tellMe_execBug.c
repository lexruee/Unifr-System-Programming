/* This version is identical to tellMe.c, but without the line */
/* #include "tellMe.h"                                         */
/* and with a different function prototype for tellMe()        */

#include <stdio.h>

void tellMe(char c)
{
   printf("\n   tellMe> %d\r\n\n", c);
   printf("   tellMe> execution BUG !!!\n\n");
}
