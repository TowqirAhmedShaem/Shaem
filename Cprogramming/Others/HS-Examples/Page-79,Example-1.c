#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    char c;
    c='a';
    for(i=0;c!='q';i++)
    {
        printf("%d \n",i);
        c=getchar();// You should see the affect of using getche()
    }
    return 0;
}
