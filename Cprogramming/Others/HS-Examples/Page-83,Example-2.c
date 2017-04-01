#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    printf("Pls enter your message\a\n");
    c=getche();
    while(c!='\r') //**
    {
        printf("%c",c+1);
        c=getche();
    }
    return 0;
}
