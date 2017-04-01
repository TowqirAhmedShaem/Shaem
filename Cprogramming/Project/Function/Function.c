#include<stdio.h>

//This code is about function.
/*int square(a)
{
    return (a*a*a);
}
void main()
{
    int number,result;
    printf("Pls give a number\n");
    scanf("%d",&number);
    result=square(number);
    printf("The cube of %d is %d",number,result);
}*/
long int factorial(long int n)
{
    if(n<=1)
        return 1;
    else
        return(n*factorial(n-1));
}
void main()
{
    long int x,value;
    printf("Pls give a value\n");
    scanf("%d",&value);
    x=factorial(value);
    printf("Factorial of %d is %d",value,x);
}
