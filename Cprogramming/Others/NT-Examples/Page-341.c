#include<stdio.h>
int main()
{
    int x[4][3];
    x[2][1]=7;
    printf("%d %d %d\n",x[2][1],*(x[2]+1),*(*(x+2)+1));
}
