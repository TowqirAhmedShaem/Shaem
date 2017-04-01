//Page-42,Fig-2.10.
//Code was made by Towqir Ahmed Shaem.
#include<stdio.h>
main()
{
    int year,period;
    float amount,inrate,value;
    printf("Please give the value of amount,inrate and period\a\n");
    scanf("%f %f %d",&amount,&inrate,&period);
    year=0;
    while(year<=period)
    {
        value=amount+inrate*amount;
        printf("year: %d Amount: %.2f\a\n",year,amount);
        amount=value;
        year++;
    }
}
