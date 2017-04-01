#include<stdio.h>
#include<math.h>
double f(double x)
{
    return(1/(pow((1+x),.5)));
}
double f1(double x)
{
    return(-1/(2*pow((1+x),3/2)));
}
int main()
{
    int i=1,n;
    printf("\t\t\tIteration Method\n\t\t\t----------------\n");
    printf("Enter the proper approximation :\n");
    double x1;
    scanf("%lf",&x1);
    printf("Enter the number of iteration :\n");
    scanf("%d",&n);
    double X;
    while(i<=n)
    {
        X=f(x1);
        printf("The root after %d iteration : %lf\n",i,X);
        x1=X;
        i++;
    }
    printf("The approximation of the root : %lf\n",X);
    return 0;
}
