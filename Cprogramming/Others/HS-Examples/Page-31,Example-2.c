#include<stdio.h>
int convert();
int main()
{
    float pounds;
    pounds=convert();
    printf("%f\a\n",pounds);
    return 0;
}
int convert()
{
    float dolar;
    printf("Pls type the amount of dolars\a\n");
    scanf("%f",&dolar);
    return 2*dolar;
}
