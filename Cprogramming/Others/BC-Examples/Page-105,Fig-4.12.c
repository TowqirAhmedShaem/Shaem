//code was made by shaem_di_silva
#include<stdio.h>
#define items 4
main()
{
    int i,quantity[5];
    float rate[5],value,total_value;
    char code[5][5];
    i=1;
    while(i<=items)
    {
        printf("Enter code quantity and rate \a\n");
        scanf("%s %d %f",&code[i],&quantity[i],&rate[i]);
        i++;
    }
    printf("\n\nInventory Report\a\n\n");
    printf("Code Quantuty Rate Value\a\n");
    total_value=0;
    i=1;
    while(i<=items)
    {
        value=quantity[i]*rate[i];
        printf("%s %-6d %-.2f  %e\a\n",code[i],quantity[i],rate[i],value);
        total_value+=value;
        i++;
    }
    printf("\n\nTotal Value : %e\a\n",total_value);
}
