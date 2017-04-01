#include<stdio.h>
int main()
{
    int a[2][2]={5,4,4,4};
    int b[2][2]={6,7,4,8},i,j,k,sum,c[2][2];
    printf("Matrix A :\n");
    for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                printf("%d ",a[i][j]);

            }
            printf("\n");
        }
    printf("\nMatrix B :\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        {
            printf("%d ",b[i][j]);
            printf("\n");
        }
    printf("\nMatrix c:\n");
    for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
    {
        sum=0;
        for(k=0;k<2;k++)
            sum=sum+a[i][k]*b[k][j];
        c[i][j]=sum;
        printf("%d ",c[i][j]);
    }
    printf("\n");
    }

}
