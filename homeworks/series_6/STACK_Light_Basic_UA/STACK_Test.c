/*--------------------------------------------------------------------------------
STACK test program
Author: Beat Hirsbrunner, DIUF, University of Fribourg, Switzerland, © 2005-2013
Version: Basic v4.1, 10 March 2013
--------------------------------------------------------------------------------*/

#include <stdio.h> // printf, scanf
#include "STACK_SR_Specif.h"

void print_usage()
{
  printf("p)put(i)   g)get   Q)Quit\n");
}

int main() 
{
  int elt; // element to be pushed and poped
  char c;  // 'switch(c)' of the main loop
  
  // display management
  const char *prompt = "> ";
  int prompt_count = 1;
  
  print_usage();
  printf("%i%s", prompt_count++, prompt);
  
  
  /*---------------------------
  Main loop of the test program
  ---------------------------*/
  while ( (c = getchar()) != 'Q')
  {
    switch(c)
    {
      case 'p':  // put
        if (scanf("%i", &elt) != 1) goto error_scanf;     
        stack_put(elt);
        printf("%i\n", elt);
        break;
        
      case 'g':  // get
        elt = stack_get();
        printf("%i\n", elt);
        break;

      case 's': //size
	printf("%i\n",stack_size());
	break;
                
      default:
        print_usage();
        break;
    }
    while (getchar() != '\n') {} /* skip end of line */
    printf("%i%s", prompt_count++, prompt);
    continue;  // all is ok, go to the beginning of the main loop
    
/*----- ERROR TREATMENT -----*/ 
error_scanf:
    while (getchar() != '\n') {} /* skip end of line */
    printf("ERROR: wrong scanf argument\n");
    printf("%i%s", prompt_count++, prompt);
    continue;
/*----- END ERROR TREATMENT -----*/     
  }
  /*--------------------------------------
  End of the main loop of the test program
  --------------------------------------*/

  printf("Quit\n");
  return 0;
}
