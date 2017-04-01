#include<stdio.h>
#include<math.h>
double shaem(double x)
{
    return(pow(x,3)-3*x-5);
    //return(3*x-cos(x)-1);
}
double saem(double x)
{
    //return(3*pow(x,2)-3);
    return (3+sin(x));
}
int main()
{
    double h,x1,x2,x3,f1,f2,f3;
    int n,i=1;
    printf("\t\t\tNewton Raphson Method\n\t\t\t---------------------\n");

    printf("F(x)= (pow(x,3)-3*x-5)\nF'(x)=(3*pow(x,2)-3)\n---------------------\n");
    printf("Enter the first approximation :\n");
    scanf("%lf",&x1);
    printf("Enter the iteration :\n");
    scanf("%d",&n);
    if(x1==0)
        {
            x2=x1;
            goto h;
        }
    else
    {
        while(i<=n)
        {
            h=shaem(x1)/saem(x1);
            x2=x1-h;
            printf("The root after %d iteration : %.15lf\n",i,x2);
            x1=x2;
            i++;
        }
    }
    h:
    printf("\nThe approximation to the root : %.15lf\n",x2);


}
