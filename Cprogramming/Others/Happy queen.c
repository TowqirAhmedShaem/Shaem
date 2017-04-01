#include<stdio.h>
int main()
{
    int i,j,n,a,max=0,count=0;
    int b[1000];
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&a);
        for(i=0;i<a;i++)
        scanf("%d",&b[i]);
        for(i=0;i<a;i++)
            if(b[i]>max)
                max=b[i];
        for(i=0;i<a;i++)
        {
            if(b[i]==max)
                {
                    count++;
                    printf("Count : %d\n",count);
                }
        }

        printf("Max =%d\n",max);
        if(count>1)
            printf("Case %d : Unhappy Unhappy\n",j+1);
        else if(count==1)
            printf("Case %d : Happy Unhappy\n",j+1);
    }
    return 0;
}
