#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    do{
        printf("Load,Save,Edit,Quit\a\n");
        do{
            printf("Enter your selection\a\n");
            c=getchar();
        }while(c!='l' && c!='s' && c!='q' && c!='e');
        if(c!='q')
            printf("Shaem");
        if(c!='q')
            printf("Paira");
    }while(c!='q');
    return 0;
}
