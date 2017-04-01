//Code was made by Shaem.
//Page-50,Problem-2.1
//sum of the following harmonic series for a given value of n:1+1/2+1/3+1/4+1/n
#include<stdio.h>

void main()
{
    float n,i;
    float sum=0;

    printf("Please Give The Value of n.\nn: \a");
    scanf("%f",&n);
    //
    for(i=1;i<=n;i++)
    {
        sum = sum + (1/i);
        /*if(i==1)
            printf("1+");
        else if(i==n)
            printf(" 1/%.f \n",i);
        else
            printf(" 1/%.f+",i);*/
    }
    printf("Sum:%.2f \a",sum);
    /*i=1;
    while (i<=n)
    {
        sum=sum+(1/i);
        i++;
    }
    printf("Sum:\t%.2f",sum);*/

    }
