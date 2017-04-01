#include<stdio.h>
#include<math.h>
int main()
{
    float x[20],y[20][20];
    int i,n,j;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        printf("x%d : ",i);
        scanf("%f", &x[i]);
    }
    for(i=1;i<=n;i++)
    {
        printf("y%d : ",i);
        scanf("%f", &y[i][1]);
    }
    // Counting Difference
    for(j=1;j<n;j++) // Work With  Column
        for(i=n;i>j;i--) //Work With Row
            y[i][j+1]=y[i][j]-y[i-1][j];

    printf("\n");
    // Printing Values
    for(i=1;i<=n;i++) // Work With Row
    {
        printf("x%d : %-3.2f y%d : ",i,x[i],i);
            for(j=1;j<i+1;j++) // Work With Column
                printf("%-4.2f ", y[i][j]);
        printf("\n");
    }
}


