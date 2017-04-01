#include<stdio.h>
int x=10;
int shaem(int i);
int main()
{
    int y=x;
    int z=shaem(y);
    printf("%d %d",y,z);
    return 0;
}
int shaem(int i)
{
    return i/2;
}
