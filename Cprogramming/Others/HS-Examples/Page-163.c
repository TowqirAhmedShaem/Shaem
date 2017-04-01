#include<stdio.h>
#include<string.h>
int main()
{
    char str[15],i;
    printf("Enter a string :\a\n");
    gets(str);
    for(i=strlen(str);i<14;i++)
        strcat(str,".");
    printf (str);
    return 0;
}
