#include<stdio.h>
void outchar(char c);
int main()
{
    outchar('P');
    outchar('a');
    outchar('i');
    outchar('r');
    outchar('a');
    return 0;
}
void outchar(char c)
{
    printf("%c\a",c);
}
