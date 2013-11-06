/*--------------------------------------------------------------------------------
FIFO subroutines implementation

Description: same as FIFO_Light_Basic_BA, but with a linear array with possibly 
shift to low end, instead of a circular array

Author: Beat Hirsbrunner, DIUF, University of Fribourg, Switzerland, © 2005-2013
Version: BA v4.1, 10 March 2013
--------------------------------------------------------------------------------*/

#include "stdlib.h"  // exit
#include "FIFO_SR_Specif.h"


/*--- sketch of the data structure ---------
           -----------------------------
           |   |   | * | * | * |   |   | 
           ----------------------------- 
             |       h           t
            base
            
for fifo_put: possibly shift the elements to low end if t_pre == CAPACITY
------------------------------------------*/


//--- shared variables
#define CAPACITY 4   // CAPACITY of the fifo
static int base[CAPACITY];  // fifo storage
static int head = 0;        // pseudo pointer refering to the head
static int tail = 0;        // pseudo pointer refering to the next free entry

//--- local function
static void shift_low_end()
{
  int i;
  for (i=0; i<tail-head; i++) base[i] = base[i+head];
  tail = tail - head;
  head=0;
}

//--- fifo subroutines
void fifo_put(int e)
{
  if (tail - head == CAPACITY) exit(EXIT_FAILURE); // fifo is full
  if (tail == CAPACITY) shift_low_end();           // garbage collection
  base[tail++] = e;
}

int fifo_get()
{
  if (head == tail) exit(EXIT_FAILURE); // fifo is empty
  return base[head++];
}