#include<stdio.h>
#include<math.h>
float f(float x)
{
    return ( log(x) );
}
float simpson_one_third(float a,float b,int n);
float simpson_third_eight(float a,float b,int n);
float trapezooidal(float a,float b,int n);
float weddles(float a,float b,int n);
int main()
{
    float answer,sum,b,a,h;
    int i,n;
    printf("Upper limit : ");
    scanf("%f", &b);
    printf("Lower limit : ");
    scanf("%f", &a);
    printf("Number of Subintervals(n) : ");
    scanf("%d", &n);
    simpson_one_third(a,b,n);
    simpson_third_eight(a,b,n);
    trapezooidal(a,b,n);
    weddles(a,b,n);

}
float simpson_one_third(float a,float b,int n)
{
    float answer,sum,h;
    int i;
    h=(b-a)/n;
    if(n%2!=0)
    {
        printf("Number of Subinterval Should be Even\n");
        exit(0);
    }
    sum=(f(a)+f(a+ n*h));
    for(i=1;i<n;i++)
    {
        if(i%2==0)
            sum+= 2*f(a+i*h);
        else
            sum+= 4*f(a+i*h);
    }
    sum*=h/3;
    printf("Answer For Simpson's 1/3 Rule : %f\n", sum);
}
float simpson_third_eight(float a,float b,int n)
{
    float answer,sum,h;
    int i;
    h=(b-a)/n;
    if(n%3!=0)
    {
        printf("Number of Subinterval Should be Divisible By 3 \n");
        exit(0);
    }
    sum=(f(a)+f(b));
    for(i=1;i<n;i++)
    {
        if(i%3==0)
            sum+= 2*f(a+i*h);
        else
            sum+= 3*f(a+i*h);
    }
    sum*=3*h/8;
    printf("Answer For Simpson's 3/8 Rule: %f\n", sum);
}
float trapezooidal(float a,float b,int n)
{
    float answer,sum,h;
    int i;
    h=(b-a)/n;
    sum=.5 * (f(a)+f(b));
    for(i=1;i<n;i++)
        sum+=f(a+i*h);
    sum*=h;
    printf("Answer For Trapezoidal: %f\n", sum);
}
float weddles(float a,float b,int n)
{
    float answer,sum,h;
    int i;

    h=(b-a)/n;
    if(n%6!=0)
    {
        printf("Number of Subinterval Should be Divisible By 6 \n");
        exit(0);
    }
    sum=f(a);
    for(i=1;i<n;i++)
    {
        if(i%6==0)
            sum+= 2*f(a+i*h);
        else if(i%3==0 && i%6!=0)
            sum+= 6*f(a+i*h);
        else if(i%2==0 && i%6!=0 && i%3!=0)
            sum+= f(a+i*h);
        else
            sum+= 5*f(a+i*h);
    }
    sum*=3*h/10;
    printf("Answer For Weddle's Rule : %f\n", sum);
}

