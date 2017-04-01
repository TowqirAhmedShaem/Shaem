//code was made by shaem.
//Page-54,Fig-3.1

#include<stdio.h>
main()
{
    int months,days;
    printf("Please give the number of days\a\n");
    scanf("%d",&days);
    months=days/30;
    days=days%30;
    printf("Months=%d\tDays=%d\a",months,days);
}
