#include<stdio.h>
int main()
{
    float num;
    int choice;
    printf("Enter the value of number\a\a\n");
    scanf("%f",&num);
    printf("Enter choice\a\npress 1 for FEET TO METERS\a\npress 2 for METERS to FEET\a\n");
    scanf("%d",&choice);
    if(choice==1)
    printf("%f\a",num/3.28);
    if(choice==2)
    printf("%f\a",num*3.28);
    else
    printf("You don't choose any options\a\n");
    return 0;
}
