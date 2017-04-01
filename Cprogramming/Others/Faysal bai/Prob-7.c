// A program about finding the individual numbers of a three digit numbers.
//code was made by shaem_di_silva.
#include<stdio.h>
main()
{
    int a,b,c,d;
    printf("Please give a number\a\n");
    scanf("%d",&a);
    b=a/100;
    c=(a/10)%10;
    d=a%10;
    printf("Ths digits of %d is %d %d %d",a,b,c,d);
}
