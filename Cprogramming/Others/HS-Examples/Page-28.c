#include<stdio.h>
int shaem(void);

int main(void)
{
    int a;
    a=shaem();
    printf("%d \n\n\n",a);
    return 0;
}
int shaem(void)
{
    return 12;
}
