//Euler's Method By Array
#include<stdio.h>
double f(double x,double y)
{
    return ( x*x + x*y +2 ); //Program 8.1
    // return (x*x + y*y); //  Example 8.3.1
}
int main()
{
    float x0,xn,h,y1,y0;
    int i=1;
    float X[20],Y[20];
    printf("Give the initial value(x0) and final value(xn) of x : \n");
    scanf("%f%f", &x0, &xn);
    printf("Give the length (h) : ");
    scanf("%f", &h);
    printf("Give the initial value of Y : ");
    scanf("%f", &y0);
     while(x0<xn)
        {
        y1=y0+h*f(x0,y0);
        x0=x0+h;
        X[i]=x0;
        y0=y1;
        Y[i]=y1;
        printf(" X%-2d= %.2f     y%-2d= %f\n",i,X[i],i,Y[i]);
        i++;
    }
}
