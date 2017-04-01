#include<stdio.h>
float f(float x,float y)
{
    //return (y*y - x*x);
    //return (x*x + y*y); // Lecture
    //return (x- y*y); // Exercise 17(i) page 289
    return (x+y); //Example 11 page 284
}
int main()
{
    float x0,x1,xn,y0,y1,yn,h,y,X[20],Y[20];
    float k1,k2,k3,k4;
    int i=1;
    printf("Enter the initial and final value of x0 and xn : ");
    scanf("%f %f", &x0, &xn);
    printf("Enter the initial value of y0 : ");
    scanf("%f", &y0);
    printf("Enter the step length(h) : ");
    scanf("%f", &h);
    printf("\n");
    while(1)
    {
        k1=h*f(x0,y0);
        k2=h*f(x0+h/2,y0+k1/2);
        k3=h*f(x0+h/2,y0+k2/2);
        k4=h*f(x0+h,y0+k3);
        y=(k1+2*k2+2*k3+k4)/6;
        X[i]=x0+h;
        Y[i]=y0+y;
        if(X[i]>xn)
            break;
        printf("x%d = %.2f\ty%d = %f\n",i,X[i],i,Y[i]);
        x0=X[i];
        y0=Y[i];
        i++;
    }
}
