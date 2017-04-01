#include<stdio.h>
main()
{
    float sum;
    int i;
    sum=0;
    for(i=1;i<=10;i++)
    {
        sum=sum+1/(float)i;
        printf("%2d=\t%.4f\n\a",i,sum);
    }
}
