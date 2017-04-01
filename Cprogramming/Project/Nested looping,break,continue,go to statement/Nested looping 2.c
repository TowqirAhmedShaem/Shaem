#include<stdio.h>
void main()
//Nested looping.
//This code is about nested looping.
{
    int i,j;
    for(i=1;i<=20;i++)
    {
        printf("Namta for:%d\n",i);
        for(j=1;j<=10;j++)
        {
            printf("%d x %d=%d\n",i,j,(i*j));

        }

    }
}

