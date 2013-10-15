/* This version is identical to tellMe.c, but with a different */
/* function prototype for tellMe()                             */

#include <stdio.h>
#include "tellMe.h"

void tellMe(char c)   /* Signature Bug !!! */
{
   printf("\n   tellMe> %d\r\n\n", c);
   printf("   tellMe> compile BUG !!!\n\n");
}