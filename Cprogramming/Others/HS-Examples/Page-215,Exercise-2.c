#include<stdio.h>
int shaem(char *msg,char *p);
int main()
{
    char str[50];
    shaem("Enter a message : ",str);
    printf("Your string is : %s\n",str);
    return 0;
}
int shaem(char *msg,char *p)
{
    printf(msg);
    gets(p);
    return 0;
}
