#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    int a;
    do{
    printf("Pls enter a character\a\n");
    c=getche();
    printf("\n");
    switch(c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("This is vowel \a\n");
        break ;
    default:
        printf("This is consonant\a\n");

    }
    printf("pres 0 to stop this and press any number to restart this : \a\n");
    scanf("%d",&a);
    }while(a!=0);
    return 0;
}
