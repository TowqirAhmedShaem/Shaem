#include<stdio.h>
int main()
{
    int a,*b,**c;
    c=&b;
    b=&a;
    **c=13;
    printf("%p %p %p\n",&a,b,c);
    return 0;
}
