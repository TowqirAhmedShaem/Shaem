#include<stdio.h>
//Program for investment problem.Fig-1.5,page-8,BC.
#define period 10
#define principal 5000
main()
{
    /*
    int year;
    float amount,value,inrate;
    amount=principal;
    inrate=.11;
    year=0;
    while(year<=period)
    {
        printf("year:%d  amount:%.2f\n",year,amount);
        year=year+1;
        value=amount+inrate*amount;
        amount=value;
    }
    */

//Alternative method by for loop.
    int year,i;
    float amount,value,inrate;
    amount=principal;
    inrate=.11;

    for(i=0;i<=10;i++)
    {
        year=i;
        printf("year:%d  amount:%.2f\n",year,amount);
        value=amount+inrate*amount;
        amount=value;
    }

}
