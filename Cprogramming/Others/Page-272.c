#include<stdio.h>
int fun(float array[],int size);
int main()
{
    float shaem[5]={10.0,20,30,40,50};
    float paira[4]={1,100,1000,10000};
    float nipu[3]={-5.5,-6.6,-7.7};
    printf("\nValues of shaem array:\n");
    fun(shaem,5);
    printf("\nValues of paira:\n");
    fun(paira,4);
    printf("values of nipu:\n");
    fun(nipu,3);
    return 0;
}
int fun(float array[],int size)
{
    int n;
    for(n=0;n<size;n++)
    {
        printf("%.2f ",array[n]);
    }
    return 0;
}
