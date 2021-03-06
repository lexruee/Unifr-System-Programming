/*--------------------------------------------------------------------------------
Stack subroutines implementation
Author: Beat Hirsbrunner, DIUF, University of Fribourg, Switzerland, © 2005-2013
Version: BA v4.1, 10 March 2013
--------------------------------------------------------------------------------*/

#include <stdlib.h>  // exit
#include "STACK_SR_Specif.h"


/*--- sketch of the data structure ---------
           -----------------------------
           | * | * | * | * |   |   |   | 
           ----------------------------- 
             |              top
            base
------------------------------------------*/


//--- shared variables
#define CAPACITY 4         // CAPACITY of the stack
static int base[CAPACITY]; // stack storage
static int top = 0;        // pseudo pointer referring to the next free entry


//--- stack subroutines
void stack_put(int e)
{
  if (top == CAPACITY) exit(EXIT_FAILURE); // stack is full
  base[top++] = e;
}

int stack_get()
{
  if (top == 0) exit(EXIT_FAILURE); // stack is empty
  return base[--top];
}


int stack_peek(){
	if(top == 0) exit(EXIT_FAILURE);
	return base[top-1];
}

