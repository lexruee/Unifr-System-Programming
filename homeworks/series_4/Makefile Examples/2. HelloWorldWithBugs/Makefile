all : hello hello_unwiseBug hello_execBug hello_compBug 

clean_all :
	rm -f *.o hello hello_*Bug

clean_*.o :
	rm -f *.o


#---- hello
hello : hello.o tellMe.o
	gcc -o hello hello.o tellMe.o

hello.o : hello.c
	gcc -c hello.c

tellMe.o : tellMe.c
	gcc -c tellMe.c



#---- hello_unwiseBug
hello_unwiseBug : hello.o tellMe_unwiseBug.o
	gcc -o hello_unwiseBug hello.o tellMe_unwiseBug.o

tellMe_unwiseBug.o : tellMe_unwiseBug.c
	gcc -c tellMe_unwiseBug.c



#---- hello_execBug
hello_execBug : hello.o tellMe_execBug.o
	gcc -o hello_execBug hello.o tellMe_execBug.o

tellMe_execBug.o : tellMe_execBug.c
	gcc -c tellMe_execBug.c


 
#---- hello_compBug
hello_compBug : hello.o tellMe_compBug.o
	gcc -o hello_compBug hello.o tellMe_compBug.o

tellMe_compBug.o : tellMe_compBug.c
	gcc -c tellMe_compBug.c

