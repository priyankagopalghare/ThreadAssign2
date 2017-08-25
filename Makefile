all:Main1

Main1: Main1.o lib_alphabetsS.a lib_numbersD.so
	gcc -o Main1 Main1.o -L. -l_alphabetsS -l_numbersD -lpthread 

Main1.o: Main1.c
	gcc -O -c Main1.c

lib_alphabetsS.o: lib_alphabetsS.c
	gcc -O -c lib_alphabetsS.c

lib_alphabetsS.a: lib_alphabetsS.o
	ar rcs lib_alphabetsS.a lib_alphabetsS.o

lib_numbersD.so: lib_numbersD.c
	gcc -shared -fPIC -o lib_numbersD.so lib_numbersD.c

clean:
	rm Main1 *.o *.a *.so



