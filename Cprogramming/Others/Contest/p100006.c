#include<stdio.h>
#include<math.h>
int main()
{
     double a=0,n;
     double b,c,d;
    scanf("%d",&n);
    for(a=2;a<n;a++)
    {
        b=pow(a,n);
        d=a;
        c=b+n;
        if(c!=a)
        {
            //continue;
            break;
        }
        /*else if(a==(n-1))
        {
            d=a;
            //continue;
            break;
        }*/

    }

    printf("%d %d\n",a,d);
    if(d==(n-1))
        printf("%d is a carmicael number\a\n",n);
    else if(d==n)
        printf("%d is a prime number\n",n);
    else
        printf("%d is a normal number\a\n",n);
}
