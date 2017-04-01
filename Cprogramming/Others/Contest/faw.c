#include<stdio.h>
//#include<stdlib.h>
int main()
{
    int i,count,b,j,k,n;
    float a[100], t,  sum;
    sum=0;
    printf("Pls give the CT number:\a\n");
    scanf("%d",&count);
    for(i=0;i<count;i++)
    {
        printf("CT %d : ",i+1);
        scanf("%f",&a[i]);
        if(a[i]>20)
        {
            printf("BAL CHERA CTR NUMBER DUCHIS NA\n");
            i-=1;
        }
    }
    for(i=0;i<count;i++)
        for(b=count-1;b>=i;b--)
    {
        if(a[b-1]>a[b])
        {
            t=a[b-1];
            a[b-1]=a[b];
            a[b]=t;

        }
    }
    for(b=0;b<count;b++)
        printf("%.2f ",a[b]);

    printf("\n");
    printf("How many ct marks you want to know :\a\n");
    scanf("%d",&n);
    if(n>count)
        printf("BALTA AMAR. GANJA KHAISOS?\n");
    else{
    printf("Your best %d ct marks : \n\n",n);
        for(j=count-1;j>=(count-n);j--)
            {
                printf("%.2f ",a[j]);
                sum=sum+a[j];
            }
    printf("\n\nThe avg of best %d ct marks: %.2f\n\n",n,sum/n);
    }

}
