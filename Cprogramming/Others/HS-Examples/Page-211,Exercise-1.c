#include<stdio.h>
int fact(int i);
int main()
{
    int n;
    printf("Type the number that you want to factorial : ");
    scanf("%d",&n);
    printf("The Factorial is : %d\n",fact(n));

}
int fact(int i)
{

    if(i==1)
        return 1;
    else
        return i*fact(i-1);

}
