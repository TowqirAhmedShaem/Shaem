#include<stdio.h>
void f1(int n[5]), f2(int n[]), f3(int *a);

int main()
{
    int count[5]={1,2,3,4,5};
    f1(count);
    f2(count);
    f3(count);
    return 0;
}
void f1(int n[5])
{
    int i;
    for(i=0;i<5;i++)
        printf("%d ",n[i]);
    printf("\n");
}
void f2(int n[])
{
    int i;
    for(i=0;i<5;i++)
        printf("%d ",n[i]);
    printf("\n");
}
void f3(int *a)
{


   int i;
   for(i=0;i<5;i++)
        {
            printf("%d ",*a);
            *a++;
        }


    /*
    int i;
    for(i=0;i<5;i++)
        printf("%d ",a[i]);
    printf("\n");
    */

    /*
    if(*a)
    {
        printf("%d ",*a);
        f3(a+1);

    }
    */

}
