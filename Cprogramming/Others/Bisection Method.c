//Bisection Method
#include<stdio.h>
#include<math.h>
double shaem(double x)
{
    return(pow(x,3)-x-1);
}
int main()
{
    double x1,x2,r,f1,f2,f3;
    int n,i=1;;
    printf("Enter the first approximation to the root :\n");
    scanf("%lf",&x1);
    printf("Enter the second approximation to the root :\n");
    scanf("%lf",&x2);
    printf("Enter the number of iterations :\n");
    scanf("%d",&n);
    if(shaem(x1)==0)
        r=x1;
    else if(shaem(x2)==0)
        r=x2;
    else
    {
        while(i<=n)
        {
            f1=shaem(x1);
            f2=shaem(x2);
            r=(x1+x2)/2;
            f3=shaem(r);
            if(f3==0)
            {
                r=f3;
                break;
            }
            printf("The root after %d iteration : %lf\n",i,r);
            if(f1*f3<0)
                x2=r;
            else if(f2*f3<0)
                x1=r;
            i++;
        }
    }
    printf("The approximation to the root : %lf\n",r);
}
