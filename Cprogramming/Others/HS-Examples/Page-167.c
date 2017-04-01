#include<stdio.h>
int main()
{
    int p,*q;
    p=122;//assign the value
    q=&p; //assign q the address of p
    printf("%d\n",*q);
    return 0;
}
