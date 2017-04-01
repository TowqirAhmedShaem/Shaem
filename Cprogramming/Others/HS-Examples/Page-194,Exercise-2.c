#include<stdio.h>
int main()
{
    char c[80],*p;
    int space=0;
    printf("Enter a string :\a\n");
    gets(c);
    p=&c;
    while(*p)
    {
        if(*p==' ')
            space++;
            p++;
    }
    printf("NUmber of spaces :%d\n",space);
    return 0;

}
