// A program about accepting a three digit number and printing the sum of the individuals numbers.
//code was made by shaem_di_silva.
#include<stdio.h>
main()
{
    int a,b,c,d,sum;
    printf("Please give a number\a\n");
    scanf("%d",&a);
    b=a/100;
    c=(a/10)%10;
    d=a%10;
    printf("Ths digits of %d is %d %d %d\a\n",a,b,c,d);
    sum=b+c+d;
    printf("Sum:\t%d\a\n",sum);
}

