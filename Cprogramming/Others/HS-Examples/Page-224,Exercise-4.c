#include<stdio.h>
#include<ctype.h>

int shaem(char p);
int main()
{
    char c='a';
    shaem(c);
}
int shaem(char p)
{
    printf("%c ",toupper(p));
    if(p<'z')
        shaem(p+1);
}

/*
int shaem(char *p);
int main()
{
    char c[80];
    printf("Give a message :\n");
    gets(c);
    shaem(c);
}
int shaem(char *p)
{
    int i;
    if(*p)
    {
        printf("%c",toupper(*p));
        shaem(p+1);
    }
 }

 */

