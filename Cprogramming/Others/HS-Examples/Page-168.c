#include<stdio.h>
int main()
{
    int *p,q;
    p=&q; //gets q's address
    *p=132;
    printf("%d\n",q);
    return 0;
}
