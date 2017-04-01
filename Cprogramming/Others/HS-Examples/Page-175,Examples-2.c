#include<stdio.h>
int main(void)
{
    int *p,q;
    p=&q;
    q=1;
    printf("%p\n",p);
    *p++; //This will not increment q
    printf("%d %p\n",q,p);
    return 0;
}
