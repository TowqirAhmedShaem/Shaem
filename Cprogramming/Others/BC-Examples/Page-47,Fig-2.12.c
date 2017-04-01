//Code was made by Shaem.
//Page-47,Fig-2.12
#include<stdio.h>
#define F_low 0
#define F_max 250
#define step  25
main()
{
    typedef float real;
    real fahrenheit,celsius;
    fahrenheit=0;
    while(fahrenheit<=F_max)
    {
        celsius=(fahrenheit-32)/1.8;
        printf("Fahrenheit: %.f  Celsius: %.2f\a\n",fahrenheit,celsius);
        fahrenheit=fahrenheit+step;
    }
}
