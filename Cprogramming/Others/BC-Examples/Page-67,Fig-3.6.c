//code was made by shaem_di_silva
//page-67,fig-3.6
//this code is about the round off errors in floating points computations.
#include<stdio.h>
main()
{
    float sum,n,term;
    int count=1;
    sum=0;
    printf("Enter the value of n\n");
    scanf("%f",&n);
    term=1.0/n;
    while(count<=n)
    {
        sum=sum+term;
        count++;
    }
    printf("Sum: %f",sum);
}
