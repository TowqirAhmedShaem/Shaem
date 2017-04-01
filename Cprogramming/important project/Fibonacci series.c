#include<stdio.h>
int main()
{
    int a=0,b=1,c,d,n,e;
    printf("Pls give the nth value :\a\n");
    scanf("%d",&n);
    if(n==0)
        printf("Answer : 0\n");
    else
    {
        for(d=1;d<=n;d++)
        {
            c=a+b;
            printf("%d ",a);
            a=b;
            b=c;
        }
    }
}
