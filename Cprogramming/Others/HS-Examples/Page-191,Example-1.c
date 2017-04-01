#include<stdio.h>
int shaem(char *p);
int main()
{
    shaem("Shaem loves paira");
    return 0;
}
int shaem(char *p)
{
    while(*p)
    {
        printf("%c",*p);
        p++;
    }
}
