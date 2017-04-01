#include<stdio.h>
int shaem(int array[])
{
    int n;
    for(n=0;n<5;n++)
        printf("%d ",array[n]);
    array[2]=300;
}
int main()
{
    int paira[5]={1,2,3,4,5};
    printf("%d ",paira[2]);
    shaem(paira);
    printf("\n");
    printf("After %d\n",paira[2]);
}
