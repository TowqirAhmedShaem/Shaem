#include<stdio.h>
int main()
{
    char *p[3]={"Yes","No","May be-rephrase the question"};
    char str[50];
    printf("Enter a message :\n");
    gets(str);
    printf(p[strlen(str)%3]);
    return 0;
}
