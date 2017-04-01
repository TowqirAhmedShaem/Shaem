#include<stdio.h>
int main()
{
    char c[20];
    *(c+2)='s';
    printf("%c\n",*(c+2));
    return 0;
}
