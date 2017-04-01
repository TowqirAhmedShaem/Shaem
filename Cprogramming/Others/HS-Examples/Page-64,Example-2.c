#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter first number\a\n");
    scanf("%d",&i);
    printf("Enter second number\a\n");
    scanf("%d",&j);

     //Relational operations
    printf("i<j %d\n",i<j);
    printf("i<=j %d\n",i<=j);
    printf("i==j %d\n",i==j);
    printf("i>j %d\n",i>j);
    printf("i>=j %d\n",i>=j);

    //logical operations
    printf("i&&j %d\n",i&&j);
    printf("i||j %d\n",i||j);
    printf("!i !j %d %d\n",!i,!j);
    return 0;
}
