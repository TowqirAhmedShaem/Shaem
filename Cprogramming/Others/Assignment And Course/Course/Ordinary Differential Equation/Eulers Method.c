#include<stdio.h>
double f(double x,double y)
{
    return ( x*x + x*y +2 ); //Program 8.1
    // return (x*x + y*y); //  Example 8.3.1
}
int main()
{
    float x0,xn,h,y1,x;
    int i=0;
    printf("Give the initial value(x0) and final value(xn) of x : \n");
    scanf("%f%f", &x0, &xn);
    printf("Give the length (h) : ");
    scanf("%f", &h);
    printf("Give the initial value of Y : ");
    scanf("%f", &y1);
    printf("\nX value--Y value\n");
//
    while (x0<xn){
        y1=y1+h*f(x0,y1);
        x0=x0+h;
        printf("%.2f %f\n",x0,y1);
    }
  /*
    for( x=x0; x<xn; x+=h) {
        y1=y1 + h*f(x,y1);
        printf("%.2f %f\n",x+h,y1);
    }
    */
}
