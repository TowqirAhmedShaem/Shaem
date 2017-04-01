#include<stdio.h>
int main()
{
    char a[][80]={
    "when", "is", "the",
    "course", "of", "human",
    "events", ""
    };
    int i,j;
    //Now display item
    for(i=0;a[i][0];i++)
    for(j=0;a[i][j];j++)
    {
        printf("%c",a[i][j]);
        printf("");
    }
    return 0;
}
