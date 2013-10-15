/* This version is identical to tellMe.c, but without the line */
/* #include "tellMe.h"                                         */

#include <stdio.h>

void tellMe(char s[])
{
   printf("\n   tellMe> %s\r\n\n", s);
   printf("   tellMe> unwise BUG !!!\n\n");
}
