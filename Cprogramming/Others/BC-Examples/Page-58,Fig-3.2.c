//code was made by shaem
//Page-58,Fig-3.2
#include<stdio.h>
#define N 100
#define A 2
void main()
{
    int a;
    a=A;
    while (a<N)
    {
        printf("%d\a\n",a);
        a*=a;
    }
}
