#include<stdio.h>
#include<math.h>
float f(float x)
{
    return ( log(x) );
}
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
    printf("Answer : %f\n", sum);
}

