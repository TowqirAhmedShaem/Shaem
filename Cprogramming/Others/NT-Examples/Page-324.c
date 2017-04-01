#include<stdio.h>
#include<conio.h>
int main()
{
    int *p,a=16;
    printf("%x %d\n",p,*p);
    p=&a;
    printf("%x %d",p,*p);
}
