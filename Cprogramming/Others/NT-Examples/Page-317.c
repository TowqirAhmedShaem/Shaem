#include<stdio.h>
#include<conio.h>
int main()
{
    int i,*j,a[5]={1,3,5,7,9};
    j=a;
    for(i=0;i<5;i++)
    {
        printf("%d ",*j);
        j++;
    }
}
