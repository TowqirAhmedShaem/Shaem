#include<math.h>
#include<stdio.h>
float f(float x)
{
    return (x*x*x);
}
int main()
{
    float answer,sum,b,a,h;
    int i,n;
    printf("Upper limit : ");
    scanf("%f", &b);
    printf("Lower limit : ");
    scanf("%f", &a);
    printf("Number of Subintervals(n%3 should be zero ) : ");
    scanf("%d", &n);
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
    printf("Answer : %f\n", sum);
}

