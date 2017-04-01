#include<stdio.h>
int main()
{
    float a,*b,**c;
    b=&a;
    c=&b;
    **c=123.903;
    printf("%f %f\n",a,**c);
    return 0;
}
