#include<stdio.h>
int main()
{
    int i;
    char c;
    i=0;
    for(c=0;c<100;c++)
        i=c+i;
    printf("Total is : %d",i);
    return 0;
}
