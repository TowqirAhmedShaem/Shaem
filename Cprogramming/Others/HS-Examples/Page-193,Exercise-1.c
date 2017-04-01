#include<stdio.h>
#include<string.h>
void mystrcat(char *to,char *from);
int main()
{
    char str[50];
    strcpy(str,"first part");
    mystrcat(str,"second part");
    printf(str);
    return 0;
}
void mystrcat(char *to,char *from)
{
    //Find the end of to
    while(*to)
        to++;
    //concatenate the string
    while(*from)
        *to++=*from++;
    //add the null terminator
    *to='\0';
}
