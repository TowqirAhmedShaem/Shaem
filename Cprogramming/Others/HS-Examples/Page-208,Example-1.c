#include<stdio.h>
void shaem(int n);
int main()
{
    shaem(2);
    return 0;
}
void shaem(int n)
{
    if(n<12)
    {
        printf("%d ",n);
        shaem(n+1); // Recursive call
    }
}

