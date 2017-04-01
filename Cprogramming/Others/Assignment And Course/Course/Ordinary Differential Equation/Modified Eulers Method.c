#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
    return ( x+ powf(y,.5)); // Example 7 page 280
    // return (x+y); //Example 6 page 278
    // return (x*x - 2*y + 1);// Program 8.2
    // return (x*x-y); //Example 8.4.1
}
int decimalChecker(float x,int n)
    {
        int y;
        y=(int)(x*pow(10, n));
        return y;
    }

int main()
{
    float x0,x1,xn,h,y0,y1,yn,y;
    int i=1,n;
    float X[20],Y[20];
    printf("Give the initial value(x0) and final value(xn) of x : \n");
    scanf("%f%f", &x0, &xn);
    printf("Give the length (h) : ");
    scanf("%f", &h);
    printf("Give the initial value of Y : ");
    scanf("%f", &y0);
    printf("Enter number of decimal points: ");
    scanf("%d", &n);
     while(1)
     {
        y=y0+h*f(x0,y0);
        yn=y;
        x1=x0+h;
        do{
                y1=yn;
                yn=y0 + h/2 * (f(x0,y0) + f(x1,y1));
                if(decimalChecker(yn,n)==decimalChecker(y1,n))
                    yn=y1; // To go out from the loop.
          } while( yn!=y1);

        X[i]=x1;
        Y[i]=yn;
        y0=yn;
        x0=x1;
        if (x0>xn)
            break; // This is used to check the condition (x0<=xn)
        printf(" X%-2d= %.2f     y%-2d= %f\n",i,X[i],i,Y[i]);
        i++;
    }
}
