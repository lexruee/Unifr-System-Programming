/*--------------------------------------------------------------------------------
FIFO subroutines implementation
Author: Beat Hirsbrunner, DIUF, University of Fribourg, Switzerland, © 2005-2013
Version: BA v4.1, 10 March 2013
--------------------------------------------------------------------------------*/

#include "stdlib.h"  // exit
#include "FIFO_SR_Specif.h"

/*
 * helper function. this function is part of the "interface" in FIFO_SR_Specif.h
 */
void shift();

/*--- sketch of the data structure ---------
           -----------------------------
           |   |   | * | * | * |   |   | 
           ----------------------------- 
             |       h           t
            base
------------------------------------------*/


//--- shared variables
#define CAPACITY 4   // CAPACITY of the fifo
static int base[CAPACITY];  // fifo storage
static int head = 0;        // pseudo pointer refering to the head
static int tail = 0;        // pseudo pointer refering to the next free entry
static int size = 0;        // 'head' equal 'tail' means that the fifo is empty or full;
                            // to differentiate both cases, 'size' is used


//--- fifo subroutines
void fifo_put(int e)
{
  if (size == CAPACITY){ // fifo is full
    shift();
    size--;
    tail--;
  }
  base[tail] = e;
  tail = (tail + 1) % CAPACITY;
  ++size;
}

int fifo_get()
{
  if (size == 0) exit(EXIT_FAILURE); // fifo is empty

  int tmp = base[head];
  head = (head + 1) % CAPACITY;
  --size;
  return tmp;
}

/**
* private function!
*/
void shift(){
   int i; 
   for(i=1; i < CAPACITY; i++){
     *(base + (i-1)) = *(base + i);
   }
}

