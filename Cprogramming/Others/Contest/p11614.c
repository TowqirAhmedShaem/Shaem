#include<stdio.h>
int main()
{
    long long a,i,count,b,j,n,k,l;
    count=0;
    i=1;
    a=1;
    j=0;
    scanf("%lld",&n);
    for(k=0;k<n;k++)
    {
        scanf("%lld",&b);
        for(l=0;l<b;l++)
        {
            i=i+a;
            j=j+i;
            count++;
            if(j>=b)
                break;
        }
        printf("%lld\n",count);
    }
}
