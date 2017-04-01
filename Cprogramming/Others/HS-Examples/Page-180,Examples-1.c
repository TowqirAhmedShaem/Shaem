#include<stdio.h>
#include<ctype.h>
int main()
{
    char c[30];
    int i;
    printf("Enter a string :\a\n");
    gets(c);
    for(i=0;i<30;i++)
        c[i]=toupper(c[i]);
    printf("%s\n",c);

    for(i=0;c[i];i++)
        c[i]=tolower(c[i]);
    printf("%s\n",c);
    return 0;
}
