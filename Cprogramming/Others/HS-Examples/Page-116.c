#include<stdio.h>
int power();
int m,e;// Here m and e are global variable.
int main()
{
    printf("Pls type the number whose power you want to know and then type another how much power u want to know\a\n");
    scanf("%d %d",&m,&e);
    printf("%d raised to the %d power of %d\n",m,e,power());
    return 0;
}
// Non general version of power.****
int power()
{
    int temp,temp2;
    temp=1;
    temp2=e;
    for( ;temp2>0;temp2--)
        temp=temp*m;
    return temp;
}
