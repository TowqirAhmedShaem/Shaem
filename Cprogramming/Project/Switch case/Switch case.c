#include<stdio.h>
void main()
{
    int color;
    printf("Pls choose a color (1 Red,2&4 Green,3 Yellow\n");
    scanf("%d",&color);
    switch (color) {
case 1:
    printf("You choose red color\n");
    break;
case 2:
case 4:
    printf("You choose green color\n");
    break;
case 3:
    printf("You choose yellow color\n");
    break;
default:
    printf("You don't choose any color\n");
    break;
    }
}
