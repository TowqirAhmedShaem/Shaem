#include <stdio.h>
#define pi 3.1416
main ()
{
	float  r, A, V;
	printf("Enter the value of  the radius : ");
	scanf("%f", &r);
	A = pi *r *r;
	V = 4/3 *pi *r *r *r;
	printf("Area = %.2f\nVolume = %.2f", A, V);
	return 0;
}
