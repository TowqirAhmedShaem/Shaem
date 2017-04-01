#include<stdio.h>
void main()
{
    char grade;
    printf("Pls give your grade: ");
    scanf("%c",&grade);
    switch (grade)
    {
    case 'A':
    case 'a':
        printf("Excellent result");
        break;
    case 'B':
    case'b':
        printf("Not bad at all.But You have to study more");
        break;
    case 'C':
    case'c':
         printf("You are not sincere about your study.You have to sincere.");
         break;
    default:
        printf("Are you joking with us?Please type your grade.");
        break;
    }
}
