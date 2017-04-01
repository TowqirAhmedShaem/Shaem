#include<stdio.h>
int main()
{
    char a[50];
    int i;
    printf("Enter a string (less then 50 Characters)\a\n");
    gets(a);
    for(i=0;a[i];i++)
        printf("%c",a[i]);
    return 0;
}
