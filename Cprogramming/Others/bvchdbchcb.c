#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100],i,count,t,b,j,n;
    float sum;
    sum=0;
    printf("Pls give the number:\a\n");
    scanf("%d",&count);
    for(i=0;i<count;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<count;i++)
        for(b=count-1;b>=i;b--)
    {
        if(a[b-1]>a[b])
        {
            t=a[b-1];
            a[b-1]=a[b];
            a[b]=t;

        }
    }
    printf("\n");
        //for(t=count-1;t>=0;t--)
        for(t=0;t<count;t++)
            printf("%d ",a[t]);

    //printf("\n");
    printf("How many ct marks you want to know :\a\n");
    scanf("%d",&n);
    printf("Your best %d ct marks : ",n);

    for(j=n;j>=0;j--)
    {
        printf("%d",a[j]);
        sum=sum+a[j];
    }
    printf("\nThe avg of best %d ct marks: %f\n\n",n,sum/n);

}
