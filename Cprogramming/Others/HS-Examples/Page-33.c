#include<stdio.h>
void sum(int x,int y);
int main()
{
    sum(2,12);
    sum(4,25);
    sum(3,76);
    return 0;
}
void sum(int x,int y)
{
    printf("The sum is: %d \a\n",x+y);
}
