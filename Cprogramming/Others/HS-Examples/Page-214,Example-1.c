#include<stdio.h>
void shaem(char *c,int *i);
int main()
{
    int num;
    shaem("Enter a number : ",&num);
    printf("Your number is : %d",num);
    return 0;
}
void shaem(char *c,int *i)
{
    printf(c);
    scanf("%d ",i);
}

