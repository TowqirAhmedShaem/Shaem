#include<stdio.h>
 int shaem(void);
 int main(void)
{
    int sqr;
    sqr=shaem();
    printf("The square is : %d\a\n",sqr);
    return 0;
}
int shaem(void)
{
    int a;
    printf("Give a number\a\n");
    scanf("%d",&a);
    return a*a;
}
