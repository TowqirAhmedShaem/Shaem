#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    int i,j;
    printf("Enter a message: \a\n");
    gets(a);
    //code it
    i=0;j=strlen(a)-1;
    printf("j : %d\n",j);
    while(i<=j)
    {
        if(i<j)
            printf("%c%c",a[i],a[j]);
        else
            printf("%c",a[i]);
        i++;j--;
    }
    return 0;
}
