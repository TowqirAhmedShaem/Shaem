//Newton-Raphson
#include<stdio.h>
#include<math.h>
double F(double x)
    {
        double y;
        y = 3*x- cos(x)-1;
        //y=pow(x, 4)-x-10;
        return y;
    }
double Fprime(double x)
    {
        double y;
       y = 3+sin(x);
       //y= 4*pow(x, 3)-1;
        return y;
    }
int decimalChecker(double x, int n)
    {
        int y;
        y=(int)(x*pow(10, n));
        return y;
    }
int main()
    {
            double x1, x2, x0;
            int f, n;
            printf("Enter an approximation to the root: ");
            scanf("%lf", &x0);
            x1=x0;
            printf("Enter number of decimal points: ");
            scanf("%d", &n);
            for(f=1;f<=n;f++)
            {
                x2=x1-F(x1)/Fprime(x1);
                printf("Root after %d iterations: %lf\n", f, x2);
                if(decimalChecker(x1, n)==decimalChecker(x2, n))
                {
                    break;
                }
                x1=x2;
            }
            printf("Root: %lf", x2);
    }
