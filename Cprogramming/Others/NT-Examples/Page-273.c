#include<stdio.h>
int shaem(int a,int b);
int main()
{
    int x,paira[5]={1,2,3,4};
    x=shaem(paira[2],paira[1]);
    printf("%d\n",x);
    return 0;
}
int shaem(int a,int b)
{
    int y;
    y=a+b;
    return y;
}
