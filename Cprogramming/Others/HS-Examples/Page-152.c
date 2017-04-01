#include<stdio.h>
int main()
{
    int a[5][6];
    int i,j;
    for(i=0;i<5;i++)
       for(j=0;j<6;j++)
        a[i][j]=i*j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<6;j++)
            printf("%d ",a[i][j]);
        printf("\n");

    }
}
