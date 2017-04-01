#include<stdio.h>
#include<string.h>
int main()
{
    char str[80];
    int i;
    printf("Pls write something(less then 80 characters)\a\n");
    gets(str);
    printf("%s is %d chars long\n",str,strlen(str));
    for(i=strlen(str)-1;i>=0;i--)
        printf("%c",str[i]);
    return 0;
}
