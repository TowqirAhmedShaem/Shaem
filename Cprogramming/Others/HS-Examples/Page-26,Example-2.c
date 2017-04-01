#include<stdio.h>
void fn1(void);
void fn2(void);

int main(void)
{
    fn2();
    printf(" Paira \a\n");
    return 0;
}
void fn2(void)
{
    fn1();
    printf(" Loves");
}
void fn1(void)
{
    printf("Shaem");
}
