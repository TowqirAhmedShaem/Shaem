#include<stdio.h>
void shaem();
int max;// This is global variable.
int main()
{
    max=10;
    shaem();
    return 0;
}
void shaem()
{
    int i;
    for(i=0;i<max;i++)
        printf("%d ",i);
}
