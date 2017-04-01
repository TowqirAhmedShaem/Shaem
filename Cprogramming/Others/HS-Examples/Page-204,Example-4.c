#include<stdio.h>
int shaem(void);
int main()
{
    char c;
    c=shaem();
    printf("%c",c);
    return 0;
}
int shaem(void)
{
    return 'a';
}
