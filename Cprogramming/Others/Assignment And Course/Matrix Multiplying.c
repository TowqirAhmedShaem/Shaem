#include<stdio.h>
int main()
{
    int a[20][20],b[20][20],i,j,k,n,m,p,q,sum,c[20][20];;
    printf("Give the Matrix A size :\n");
    scanf("%d %d",&n,&m);
    printf("Give the Matrix A Value :\n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            printf("Row %d Column %d=",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    h:
    printf("Give the Matrix B size :\n");
    scanf("%d %d",&p,&q);
    if(m!=p)
    {
        printf("Column of Marix A and Row of Matrix B Must be equal\n");
        goto h;
    }
    printf("Give the Matrix B Value :\n");
    for(i=0;i<p;i++)
        for(j=0;j<q;j++)
        {
            printf("Row %d Column %d :",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    printf("\n");
    printf("Matrix A :\n");
    for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                printf("%d ",a[i][j]);

            }
            printf("\n");
        }

    printf("\nMatrix B :\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d ",b[i][j]);

        }
        printf("\n");
    }
    printf("\nMatrix c:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<q;j++)
        {
            sum=0;
            for(k=0;k<m;k++)
                sum=sum+a[i][k]*b[k][j];
            c[i][j]=sum;
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}

