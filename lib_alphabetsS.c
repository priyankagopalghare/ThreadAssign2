#include<stdio.h>
#include<unistd.h>
void *printChar(void *vargp)
{
    int i;
    sleep(1);
    for(i=65;i<=91;i++)
    {
	printf(" %c ",i);                
        
    }
}
