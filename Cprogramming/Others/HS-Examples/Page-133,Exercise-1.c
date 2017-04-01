#include<stdio.h>
int main()
{
    float f;
    for(f=1;(int)f<=10;f=f+.1)
    {
        printf("%f\n",f);
    }
    return 0;
}
