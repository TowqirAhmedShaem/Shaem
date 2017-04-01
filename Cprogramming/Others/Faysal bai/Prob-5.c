// A program about reading a number and finding whether the given number is  even or odd.
//code was made by shaem_di_silva
#include<stdio.h>
main ()
{
    int a,b;
    printf("Please give a number\a\n");
    scanf("%d",&a);
    b=a%2;
    if(b==0)
        printf("Your given number is even\a");
    else
        printf("Your given number is odd\a");
}
