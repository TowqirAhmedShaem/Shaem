#include<stdio.h>
#include<math.h> //math.h is used for sqrt()
int main(void)

{
    float a;
    double answer;
    printf("Pls give the value whose square root has to be measured\a\n");
    scanf("%f",&a);
    answer=sqrt(a);
    printf("Tne square root of %f is : %lf\n\n",a,answer);
    return 0;
}
//By this way u can learn the shortcut process.
/*
{
    float a;
    scanf("%f",&a);
    printf("%f",sqrt(a));
}
*/
