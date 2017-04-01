#include<stdio.h>
#include<conio.h>
int main(void)
{
    char c[80];
    int i;
    printf("Enter a message (less than 80 characters)\a\n");
    for(i=0;i<80;i++)
    {
        c[i]=getche();
        if(c[i]=='\r')
            break;
    }
    printf("\n");
    for(i=0;c[i]!='\r';i++)
    printf("%c",c[i]+1);
    return 0;
}
