#include<stdio.h>
#include<math.h>
float f(float x)
{
    return (x*x*x);
    //return (x* pow((16- x*x),.5));


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
    sum=.5 * (f(a)+f(b));
    for(i=1;i<n;i++)
        sum+=f(a+i*h);
    sum*=h;
    printf("Answer : %f\n", sum);
}
