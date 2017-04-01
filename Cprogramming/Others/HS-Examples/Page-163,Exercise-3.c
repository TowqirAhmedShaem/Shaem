#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,comma,period,space;
    printf("Pls give a sentance :\a\n");
    gets(str);
    comma=0;
    space=0;
    period=0;
    for(i=0;i<strlen(str);i++)
    {
        switch(str[i])
        {
        case '.':
            period++;
            break;
        case ',':
            comma++;
            break;
        case ' ':
            space++;
        }
    }
    printf("Period :%d\nComma: %d\nSpace: %d\n",period,comma,space);
}
