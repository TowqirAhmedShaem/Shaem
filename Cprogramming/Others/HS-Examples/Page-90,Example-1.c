#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    char c;
    for(i=1;i<1000;i++)
    {
        if(!(i%6))
        {
            printf("%d More?For yes press and for No press N\a\n",i);
            c=getche();
            if (c=='N')
                break;
        }
    }
}
