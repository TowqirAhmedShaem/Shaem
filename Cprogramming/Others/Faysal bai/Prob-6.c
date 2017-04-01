//A program about accepting a year and checking whether the given year is a leap year or not.
//code was made by shaem_di_silva.
#include<stdio.h>
main()
{
    int year;
    printf("Please give a year\a\n");
    scanf("%d",&year);
    if(year%4==0&&year%100!=0||year%400==0)
        printf("Your given year is a leap year\a\n");
    else
        printf("Your given year is not a leap year\a\n");
}
