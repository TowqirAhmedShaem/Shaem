#include<stdio.h>
int main()
{
    int a,b;
    char c;
    printf("Do u want to Add,Subtract,Multiply and Divide?? \a\n");

    do{
        printf("Enter first letter :\a\n");
        c=getchar();
    }while(c!='a'&&c!='s'&&c!='m'&&c!='d');

    printf("\nEnter first number :\n");
    scanf("%d",&a);
    printf("Enter second number :\n");
    scanf("%d",&b);

    if(c=='a')
        printf("The Answer is : %d",a+b);
    else if(c=='s')
        printf("The Answer is : %d%d",a-b);
    else if(c=='m')
        printf("The Answer is : %d%d",a*b);
    else
        printf("The Answer is : %d%d",a/b);

    return 0;
}

