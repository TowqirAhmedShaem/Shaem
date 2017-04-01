#include<stdio.h>
//Code is made by Towqir Ahmed Shaem.
//This code is about Array(Two dimensional).
void main()
{
    int a[7][2]={{0,0},{1,2},{2,1},{2,3},{3,4},{7,2},{8,4}};
    int i,j;
    for(i=0;i<=6;i++)
    for(j=0;j<=1;j++)
    printf("a[%d][%d]=%d\n",i,j,a[i][j]);
}
