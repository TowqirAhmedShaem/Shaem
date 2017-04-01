#include<stdio.h>
#define base_salary 1500
#define bonus_rate 200
#define Commission .02
main()
{
    int quantity;
    float gross_salary,price,bonus,commission;
    printf("Input the value of quantity and price\a\n");
    scanf("%d%f",&quantity,&price);
    bonus=bonus_rate*quantity;
    commission=Commission*quantity*price;
    gross_salary=base_salary+bonus+commission;
    printf("%.2f\a\n",bonus);
    printf("%.2f\a\n",commission);
    printf("%.2f\a\n",gross_salary);

}
