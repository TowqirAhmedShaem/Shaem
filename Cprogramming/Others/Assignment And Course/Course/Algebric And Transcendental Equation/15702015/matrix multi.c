#include<stdio.h>
int main()
{
    int a[100][100], b[100][100], c[100][100], i1, n, i2, p, i3, i3p, j3, j3p, j2, q, j1, m, mult,k,i,j;
    printf("MatA dimension:\n\tRow: ");
    scanf("%d", &n);
    printf("\n\tColumn: ");
    scanf("%d", &m);
    printf("\nMatB dimension:\n\tRow: ");
    scanf("%d", &p);
    printf("\n\tColumn: ");
    scanf("%d", &q);
        if(m!=p)
        {
        printf("Multiplication is not possible\n");

        }
    else
    {
        printf("\nInput MatA lij1e textbook writing:\n\n");
            for(i1=0;i1<n; i1++)
        for(j1=0; j1<m; j1++)
            {
                scanf("%d", &a[i1][j1]);
            }
            printf("\n");
        printf("\nInput MatB like textbook writing:\n\n");
    for(i2=0;i2<p; i2++)
        for(j2=0; j2<q; j2++)
            {
                scanf("%d", &b[i2][j2]);
            }
            printf("\n");
        i3p=n;
        j3p=q;

        for(i=0;i<n; i++)
        {
            //i1=i3;
            //j3=0;
            for(j=0; j<q; j++)
                {
                    c[i][j]=0;
                    mult=0;
                    for(k=0; k<m;k++)
                    {
                        mult=a[i][k]*b[k][j];
                        c[i][j]+=mult;
                    }
                    j3++;
                }
        }
    printf("MatA*MatB=\n\n");
        for(i=0;i<n; i++)
        {
            for(j=0; j<q; j++)
            {
                printf("%d ", c[i][j]);
            }
        printf("\n");
        }
    }
}
