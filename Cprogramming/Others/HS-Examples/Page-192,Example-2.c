#include<stdio.h>
int shaem(char *b,char *c);
int main()
{
    char a[80];
    shaem(a,"Shaem loves paira");
    printf(a);
    return 0;
}
int shaem(char *b,char *c)
{
    while(*c)
    {
        *b++=*c++;
        *b='\0';// Null terminate the string
    }
    return 0;
}
