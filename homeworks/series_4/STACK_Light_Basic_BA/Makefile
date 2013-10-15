# --------------------------------------------------------------------------------
# Makefile for STACK_Light/Basic_BA
# Author: Beat Hirsbrunner, DIUF, University of Fribourg, Switzerland, © 2005-2013
# Version: 4.1, 10 March 2013
# --------------------------------------------------------------------------------

all :  STACK_Test_BA

clean_all :
	rm -f *.o  STACK_Test_BA    

STACK_Test_BA   :  STACK_Test_BA.o  STACK_Impl_BA.o
	gcc -Wall      STACK_Test_BA.o  STACK_Impl_BA.o  -o STACK_Test_BA

STACK_Test_BA.o :  STACK_Test.c  STACK_SR_Specif.h
	gcc -Wall   -c STACK_Test.c     -o STACK_Test_BA.o

STACK_Impl_BA.o :  STACK_Impl_BA.c  STACK_SR_Specif.h
	gcc -Wall   -c STACK_Impl_BA.c  -o STACK_Impl_BA.o
