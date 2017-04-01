#include<stdio.h>
int main()
{
    char *p="stop",str[80];
    do
    {
        printf("Enter a string :\n");
        gets(str);
        printf(str);
        printf("\n");
    }while(strcmp(p,str));

    return 0;
}
