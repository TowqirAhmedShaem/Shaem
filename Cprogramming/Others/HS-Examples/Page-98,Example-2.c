#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    do
    {
        printf("Press (a,b,c,d) or press d and press q for quit\a\n");
        c=getche();
        printf("\n");
        switch(c)
        {
        case 'a':
            printf("Paira son na\a");
        case 'b':
            printf("I Love You ");
        case 'c':
            printf("Paira,i am sorry\n");
            break;
        case 'd':
            printf("I am sorry paira,if u don't say 'its ok'I don't marry you after ");
        case 'e':
            printf("Will u say 'its ok?'\npls tell me\n");
        }
    }while(c!='q');
    return 0;
}
