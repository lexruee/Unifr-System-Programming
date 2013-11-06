# --------------------------------------------------------------------------------
# Makefile for STACK_Light/Basic_UA
# Author: Beat Hirsbrunner, DIUF, University of Fribourg, Switzerland, © 2005-2013
# Version: 4.1, 10 March 2013
# --------------------------------------------------------------------------------

all :  STACK_Test_UA

clean_all :
	rm -f *.o  STACK_Test_UA    

STACK_Test_UA   :  STACK_Test_UA.o  STACK_Impl_UA.o
	gcc -Wall      STACK_Test_UA.o  STACK_Impl_UA.o  -o STACK_Test_UA

STACK_Test_UA.o :  STACK_Test.c  STACK_SR_Specif.h
	gcc -Wall   -c STACK_Test.c  -o STACK_Test_UA.o

STACK_Impl_UA.o :  STACK_Impl_UA.c  STACK_SR_Specif.h
	gcc -Wall   -c STACK_Impl_UA.c  -o STACK_Impl_UA.o
