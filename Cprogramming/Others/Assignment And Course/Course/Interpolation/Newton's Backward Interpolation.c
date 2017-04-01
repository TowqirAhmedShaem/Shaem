//Newton's Backward Interpolation
#include<stdio.h>
#include<math.h>
int main()
{
    float x[20],y[20],dell_y[20],xn,sum,period,h,u;
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
        scanf("%f", &y[i]);
    }

    printf("Enter interpolating point : ");
    scanf("%f", &xn);
    h=x[2]-x[1];
    u= (xn-x[n])/h;
    printf("U : %f\n",u);
    period=1;
    sum=y[n];
    for(i=1;i<n;i++)
    {
        for(j=n;j>i;j--)
            y[j]=y[j]-y[j-1];
        period *= (u+i-1)/i;
        sum += period*y[n];
    }
    printf("\nF(%.2f) : %f\n", xn,sum);
}

