#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    printf("Type some letters but to stop the program press q\a\n");
    do{
        c=getche();
    }while(c!='q');
    printf("\nFound the 'q'\a\n");
    return 0;
}
