#include<stdio.h>
//Fig-1.7.Page-9
int mul(x,y)
{
    return(x*y);
}
main()
{
    int a,b,c;
    a=5;
    b=6;
    c=mul(a,b);
    printf("Multiplication of %d and %d is %d.",a,b,c);
}

