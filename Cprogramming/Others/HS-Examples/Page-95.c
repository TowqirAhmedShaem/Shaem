#include<stdio.h>
int main()
{
    int i;
    printf("Pls enter a number between 1 to 4\a\n");
    scanf("%d",&i);
    switch(i)
    {
        case 1:
        printf("One");
        break;
        case 2:
        printf("Two");
        break;
        case 3:
        printf("Three");
        break;
        case 4:
        printf("Four");
        break;
        default:
            printf("Unrecognized Number");
    }
    return 0;
}
