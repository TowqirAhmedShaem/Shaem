#include<stdio.h>
#include<conio.h> // it is used for getche()

int main()
{
    char c;
    c=getche();
    while(c!='q')
    c=getche();
    printf("\nFound the  q\a\n");
    return 0;
}
