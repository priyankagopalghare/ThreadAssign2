#include<stdio.h>
#include<unistd.h>
void *printNum(void *vargp)
{
    int i;
    sleep(1);
    for(i=1;i<=26;i++)
    {
        printf(" %d ",i);      
    }
}
