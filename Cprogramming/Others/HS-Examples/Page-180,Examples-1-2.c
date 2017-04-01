#include<stdio.h>
#include<ctype.h>
int main()
{
    char c[30],*p;
    printf("Enter a string :\a\n");
    gets(c);
    p=c;
    while(*p)
    {
        *p=toupper(*p);
        *p++;
    }
    printf("%s\n",c);
    p=c;
    while(*p)
    {
        *p=tolower(*p);
        *p++;
    }
    printf("%s\n",c);
    return 0;
}
