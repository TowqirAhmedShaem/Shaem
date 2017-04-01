#include<stdio.h>
#include<math.h>
int main()
{
    float a,p,b,n;
    scanf("%f",&n);
    scanf("%f",&p);
    b=1/n;
    a=pow(p,b);
    printf("Answer is : %f",a);
}
