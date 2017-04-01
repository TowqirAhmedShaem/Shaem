#include<stdio.h>
//#include<stdlib.h>
int main()
{
    int i,count,b,j,k,n;
    float a[100],t,sum;
    assignment:
    sum=0;
    printf("Pls type how many CT you have:\a\n");
    scanf("%d",&count);
    {
        for(i=0;i<count;i++)
    {
        printf("CT %d : ",i+1);
        scanf("%f",&a[i]);
    }
    for(i=0;i<count;i++)
        for(b=i+1;b<count;b++)
    {
        if(a[i]>a[b])
        {
            t=a[i];
            a[i]=a[b];
            a[b]=t;
        }
    }
    printf("\n");
    printf("How many ct marks you want to know :\a\n");
    scanf("%d",&n);
    printf("Your best %d ct marks : \n\n",n);
    for(j=count-1;j>=(count-n);j--)
        {
            printf("%.2f ",a[j]);
            sum=sum+a[j];
        }
    printf("\n\nThe avg of best %d ct marks: %.2f\n\n",n,sum/n);
    goto assignment;
}
}
