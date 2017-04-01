//code was made by shaem.
//solution of quadratic equation Ax2+bx+ c.
#include<stdio.h>
//#include<math.h>
main()
{
    float a,b,c,discriminant,root1,root2;
    printf("Please give the value of a,b and c\a\n");
    scanf("%f%f%f",&a,&b,&c);
    discriminant=b*b-4*a*c;
    if(discriminant<0)
        printf("Roots are imaginary\a");
    else
    {
        root1=(-b+sqrt(discriminant))/(2.0*a);
        root2=(-b-sqrt(discriminant))/(2.0*a);
        printf("Root1: %5.2f\nRoot2: %5.2f",root1,root2);
    }
}
