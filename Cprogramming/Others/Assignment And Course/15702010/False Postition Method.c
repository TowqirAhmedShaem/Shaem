#include<stdio.h>
#include<math.h>
double shaem(double x)
{
    return (3*x-cos(x)-1);
}
int main()
{
    double x1,x2,y1,y2,h,x,df;
    int i=1,n;
    printf("\t\t\tFalse Position Method\n\t\t\t---------------------\n");
    printf("---------------\nx*log10(x)-1.2\n---------------\n");
    printf("Enter the first approximation :\n");
    scanf("%lf",&x1);
    printf("Enter the second approximation :\n");
    scanf("%lf",&x2);
    printf("Enter the number of iteration :\n");
    scanf("%d",&n);
    while(i<=n)
    {
        y1=shaem(x1);
        if(y1<0)
            y1*=(-1);
        y2=shaem(x2);
        if(y2<0)
            y2*=(-1);
        df=(x2-x1);
        h=(df*y1)/(y1+y2);
        x=x1+h;
        printf("The root after %d iteration : %lf\n",i,x);
        df=df/10;
        x1=x;
        x2=x1+(x2-x1);
        i++;

    }
    printf("The root after approximation : %lf\n",x);
    return 0;
}
