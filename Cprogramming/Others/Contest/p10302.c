#include<stdio.h>
#include<math.h>
int main()
{
    int sum,i,n;
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+pow(i,3);

    }
    printf("%d\n",sum);
}
