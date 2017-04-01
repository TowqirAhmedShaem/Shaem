#include<stdio.h>
int shaem(char *a);
int main()
{
    char str[50];
    gets(str);
    shaem(str);
    return 0;
}
int shaem(char *a)
{
    if(*a) //If not at the end of *a
    {
        printf("%c",*a);
        shaem(a+1);
    }

}
