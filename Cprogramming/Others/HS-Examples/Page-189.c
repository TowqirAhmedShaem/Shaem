#include<stdio.h>
int main()
{
    char a,*b,**c;
    b=&a;
    c=&b;
    **c='2';
    printf("%c\n",a);
    return 0;
}
