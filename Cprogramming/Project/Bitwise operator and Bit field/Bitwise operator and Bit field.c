#include<stdio.h>
//Code is made by Towqir Ahmed Shaem.
//This code is about the study of Bitwise operator and Bit field.
void main()
{
    //Bitwise operator.

    printf("Bitwise and of 0 and 0:%d\nBitwise or of 0 and 0:%d\nBitwise ex or of 0 and 0:%d\n",0&0,0|0,0^0);
    printf("Bitwise and of 1 and 0:%d\nBitwise or of 1 and 0:%d\nBitwise ex or of 1 and 0:%d\n",1&0,1|0,1^0);
    printf("Bitwise and of 0 and 1:%d\nBitwise or of 0 and 1:%d\nBitwise ex or of 0 and 1:%d\n",0&1,0|1,0^1);
    printf("Bitwise and of 1 and 1:%d\nBitwise or of 1 and 1:%d\nBitwise ex or of 1 and 1:%d\n",1&1,1|1,1^1);
    printf("Bitwise and of 3 and 2:%d\nBitwise or of 3 and 2:%d\nBitwise ex or of 3 and 2:%d\n",3&2,3|2,3^2);
    //Here 3 means 11 and 2 means 10.
    int a=3;
    printf("Compliment of a :%d\n",~3);

    // Bit Field.

    struct birthady
    {
        unsigned day:5;
        unsigned month:4;
        unsigned year:7;
    }date;
    date.day=2;
    date.month=12;
    date.year=95;
    printf("Birthday of Your is:%d-%d-%d",date.day,date.month,date.year);


}
