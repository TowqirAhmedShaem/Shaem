#include<stdio.h>
void main()
{
    int a,b,c;
    char sign;
    printf ("pls give the value of a and b\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    sign='+';
    printf("%d%c%d=%d\n",a,sign,b,c);
    c=a/b;
    sign='/';
    printf("%d%c%d=%d\n",a,sign,b,c);
}
