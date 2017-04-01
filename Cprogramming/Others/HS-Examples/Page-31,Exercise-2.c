#include<stdio.h>
int convert();
float pound;
int main()
{
    pound=convert();
    printf("Pound : %f\n",pound);
}
int convert()
{
    int dolar;
    printf("Pls give some dolar : \a\n");
    scanf("%d",&dolar);
    return (pound=dolar/2);
}
