#include<stdio.h>
#include<conio.h>
int main()
{
    int x,*a,b[5]={10,20,30,40,50};
    a=b;
    x=*a++;
    printf("s=%x x=%d\n",a,x);
    x=*++a;
    printf("s=%x x=%d\n",a,x);
    x=++*a;
    printf("s=%x x=%d\n",a,x);

}
