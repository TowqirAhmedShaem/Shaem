#include<stdio.h>
//Page-41,Fig-2.9.
main()
{
    int number;
    printf("Please give a number\a\n");
    scanf("%d",&number);
    if(number<100)
        printf("Your given number is smaller than 100\a");
    else
        printf("Your given number is bigger than 100\a");
}
