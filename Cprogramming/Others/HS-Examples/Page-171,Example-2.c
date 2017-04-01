#include<stdio.h>
int main()
{
    int *p;
    double q,c;
    c=1234.23;
    p=&c;
    q=*p;
    printf("%lf\n",q);
    return 0;
}
