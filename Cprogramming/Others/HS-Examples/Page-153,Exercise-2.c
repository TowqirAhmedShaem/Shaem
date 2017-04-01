#include<stdio.h>
int main()
{
    int a[3][3][3];
    int i,j,k,sum;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        for(k=0;k<3;k++)
    {
        a[i][j][k]=(i+1)*(j+1)*(k+1);
        printf("%d\n",a[i][j][k]);
    }
    //sum all elements
    sum=0;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        for(k=0;k<3;k++)
    {
        sum=sum+a[i][j][k];
    }
    printf("Sum : %d",sum);
}
