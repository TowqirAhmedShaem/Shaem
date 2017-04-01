#include<stdio.h>
#include<conio.h>
int main()
{
    char a[5][5]={
    "zero","one","two","three","four"
    };
    char i;
    printf("Enter a number :\a\n");
    //scanf("%d",&i);
    i=getche();
    printf("\n");
    i=i-'1';
    if(i>=0 && i<5)
        printf("%s",a[i]);
    return 0;
}
