#include<stdio.h>
int main()
{
    int i,j,n;
    float a[10],sum;
    printf("pls give the last number :\a\n");
    scanf("%d",&n);
    sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);

    }
    for(i=0;i<n;i++)
    {
//        sum=sum+a[i]*a[i];
        printf("a[%d] = %.2f\n",i+1,a[i]);
    }
    printf("Sum = %.2f\n",sum);
}
