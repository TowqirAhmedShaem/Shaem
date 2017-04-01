#include<stdio.h>
int main()
{
    int a[ ]={0,1,2,3,4,5,6,7,8,9};
    int i,j;
    int b[10];
    for(i=0,j=9;i<10;i++,j--)
    {
        b[j]=a[i];
    }
    for(i=0;i<10;i++)
    {
        a[i]=b[i];
        printf("%d ",a[i]);
    }
    /*for(i=0;i<10;i++)
    {

    }*/
    return 0;
}
