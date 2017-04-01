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
    printf("Number of Subintervals(n%3 should be zero ) : ");
    scanf("%d", &n);
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
    printf("Answer : %f\n", sum);
}






