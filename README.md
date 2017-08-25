# ThreadAssign2

Problme Statement : Create two seperate c files contains 1 thread each,compile one c file with static library and other c file with dyanamic library and write aplication c file which will run both thread1 and thread2 by using makefile

1.Create c file contains thread1 for printing Numbers.

2.Create c file contains other thread2 for printing Alphabets.

3.Main file for executing both threads.

4.Makefile 

Makefile :

A) Static Library
   * Static library is linked at compile time having extension .a (in linux) and .lib(in windows)
   It is created by using following command :
   $ ar rcs lib_alphabetsS.a lib_alphabetsS.o
   
    where,
    lib_alphabetsS.a -> generated static library
    lib_alphabetsS.o -> object file of lib_alphabets.c file 
    
    * To link with aplication program :
    $gcc -o Main1 Main1.c -L. -l_alphabetsS -lpthread
    
     where,
     -L -> to tell library location
     -L. -> specifies that static library is in current directory
     
     * Run apllicatio program
     $./Main1
     
B) Dynamic Library
    * Dynamic library is linked at run time having extension .so(in linux ) and .dll(int windows)
    .so means shared object linked dynamically.
    It is created by using following command :
    $gcc -shared -fPIC -o lib_numbersD.so lib_numbersD.c
    
    where,
    -shared -> compiling or building shared library
    -fPIC -> flag to generate position independent code
    
     * To link with aplication program :
    $gcc -o Main1 Main1.c -L. -l_numbersD -lpthread -o Main1
    
    * Run apllicatio program
     $./Main1
    
    
