#include<stdlib.h>
#include<stdio.h>
#include<pthread.h>
#include "lib_alphabetsS.c"
#include "lib_numbersD.c"

int main()
{
    pthread_t tid1;
    pthread_t tid2;
    pthread_create(&tid1, NULL, printNum, NULL); //thread1 is created which will print numbers
    pthread_create(&tid2, NULL, printChar, NULL); //thread2 is created which will print alphabets
    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);
    exit(0);
}
