#include<stdio.h>
int main()
{
    int num,i,prime;
    printf("Pls enter the number to test :\a\n");
    scanf("%d",&num);
    //now test for factors
    prime=1;
    for(i=2;i<=num/2;i++)
        if((num%i)==0)
        prime=0;
    if(prime==1)
        printf("The number is prime.\a\n");
    else
        printf("The number is not prime.\a\n");
    return 0;
}
