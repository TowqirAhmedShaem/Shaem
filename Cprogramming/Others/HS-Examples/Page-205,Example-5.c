#include<stdio.h>
int *shaem(int x);
int main()
{
    int *p;
    p=shaem(110);
    printf("Count through( p) is %d",*p);
    return 0;
}
int *shaem(int x)
{
    int count;
    count=x;
    return &count;
}
