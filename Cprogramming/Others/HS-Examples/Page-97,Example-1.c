#include<stdio.h>
int main()
{
    int a,b;
    char c;
    printf("Do you want to Add,Substract,Multiply, or Division\a\n");
    do
    {
        printf("Press a character\a\n");
        c=getchar();
    }while(c!='a' && c!='s' && c!='m' && c!='d');
     printf("Enter two numbers :\a\n");
     scanf("%d %d",&a,&b);
     switch(c)
     {
     case 'a':
        printf("Addition is :%d",a+b);
        break;
     case 's':
        printf("Substraction is : %d",a-b);
        break;
     case 'm':
        printf("Multiplication is :%d",a*b);
        break;
     case 'd':
        printf("%d",a/b);
        break;
     }
     return 0;
}
