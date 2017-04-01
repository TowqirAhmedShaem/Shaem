#include<stdio.h>
int main(void)
{
    char a[80],*b,**c;
    b=&a;
    c=&b;
    printf("Enter a string :\n");
    gets(*c);
    printf("HI  %s\n",*c);
    return 0;
}
