#include<stdio.h>
void shaem(int n);
int main()
{
    shaem(5);
    return 0;
}
void shaem(int n)
{
    if(n>=1)
    {
        printf("%d ",n);
        printf("\n");
        shaem(n-1); // Recursive call
        printf("%d ",n);
    }
}
