//Code was made by Shaem.
//Page-46,Fig-2.11

#include<stdio.h>
#define n 10
main()
{
    int count;
    float number,sum,average;
    sum=0;
    count=0;
    printf("Please give some numbers\a\n");
    //for(count=1;count<=n;count++)
    while(count<n)
    {
       scanf("%f",&number);
       sum=sum+number;
       count++;
    }
    average=sum/n;
    printf("N=%d\a\nsum=%f\a\n",n,sum);
    printf("Average=%f\a",average);
}
