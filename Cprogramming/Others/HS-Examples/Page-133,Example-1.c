#include<stdio.h>
#include<math.h>
int main()
{
    double i;
    for(i=1.0;i<101.0;i+=5)
    {
        printf("The square root of %lf if %lf\n",i,sqrt(i));
        printf("Whole number part : %d\n",(int)sqrt(i));
        printf("Fractional values : %lf",sqrt(i)-(int)sqrt(i));
        printf("\n\n");
    }
    return 0;
}
