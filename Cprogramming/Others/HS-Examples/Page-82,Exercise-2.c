#include<stdio.h>
int main()
{
    int i;
    printf("Pls give a number :\a\n");
    scanf("%d",&i);
    for(;i;i--)
        printf("\a");
    return 0;
}
