#include<stdio.h>
int main()
{
    int a;
    a=1;
    shaem:
        printf("%d",a);
        a++;
        if(a<10)
        goto shaem;
        return 0;
}
