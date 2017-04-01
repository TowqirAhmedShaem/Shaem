#include<stdio.h>
int shaem(int *p,int *q);
int main()
{
    int a,b;
    a=2;b=3;
    printf("A : %d\tB : %d\n",a,b);
    shaem(&a,&b);
    printf("A : %d\tB : %d\n",a,b);
}
int shaem(int *p,int *q)
{
    int c;
    c=*p;
    *p=*q;
    *q=c;

}
