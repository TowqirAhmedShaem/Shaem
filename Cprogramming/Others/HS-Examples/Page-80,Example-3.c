#include<stdio.h>
#include<conio.h>>
int main()
{
    char c;
    printf("Type some letters\a\n");
    for(c=getche();c!='q';c=getche())
        printf(" To finish the program press 'q'\a\n");
    return 0;
}
