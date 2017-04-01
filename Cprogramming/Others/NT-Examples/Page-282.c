#include<stdio.h>
int main()
{
    int shaem[3][5]={1,2,3,4,5,6,7,8,9,1,3,4,6,7,8},n,i;
    for(n=0;n<3;n++)
        for(i=0;i<5;i++)
        printf("Element[%d][%d]=%2d\n",n,i,shaem[n][i]);
    return 0;
}
