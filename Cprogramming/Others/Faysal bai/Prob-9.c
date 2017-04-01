// A program about accepting a number and checking whether the number is Armstrong or not.
//code was made by shaem_di_silva.
#include<stdio.h>
main()
{
    int a,b,c,d,sum;
    printf("Please input a three digit number\a\n");
    scanf("%d",&a);
    b=a/100;
    c=(a/10)%10;
    d=a%10;
    printf("Ths digits of %d is %d %d %d\a\n",a,b,c,d);
    sum=b*b*b+c*c*c+d*d*d;
    if(a==sum)
        printf("Your given number is a Armstrong number\a\n");
    else
        printf("Your given number is not a Armstrong number\a\n");
}


