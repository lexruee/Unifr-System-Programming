# --------------------------------------------------------------------------------
# Makefile for FIFO_Light/Basic
# Author: Beat Hirsbrunner, DIUF, University of Fribourg, Switzerland, © 2005-2013
# Version: 4.1, 10 March 2013
# --------------------------------------------------------------------------------

all :  FIFO_Test_BA

clean_all :
	rm -f *.o  FIFO_Test_BA     

FIFO_Test_BA   :  FIFO_Test_BA.o  FIFO_Impl_BA.o
	gcc -Wall     FIFO_Test_BA.o  FIFO_Impl_BA.o  -o FIFO_Test_BA

FIFO_Test_BA.o :  FIFO_Test.c  FIFO_SR_Specif.h
	gcc -Wall  -c FIFO_Test.c  -o FIFO_Test_BA.o

FIFO_Impl_BA.o :  FIFO_Impl_BA.c  FIFO_SR_Specif.h
	gcc -Wall  -c FIFO_Impl_BA.c  -o FIFO_Impl_BA.o
	