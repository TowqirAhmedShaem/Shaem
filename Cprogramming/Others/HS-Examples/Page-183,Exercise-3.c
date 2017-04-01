#include<stdio.h>
int main()
{
    char c[50],*p;
    printf("Enter a string\n");
    gets(c);
    p=c;
    while(*p && *p!=' ')
        p++;
    printf(p);
    return 0;
}
