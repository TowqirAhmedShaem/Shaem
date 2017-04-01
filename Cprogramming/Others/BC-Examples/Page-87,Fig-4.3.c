//A program that reads a character from keyboard and then prints it in reverse case.
//code was made by shaem
#include<stdio.h>
#include<ctype.h>
main()
{
    char alphabet;
    printf("Pease type an alphabet\a\n");
    putchar('\n');
    alphabet=getchar();
    if(islower(alphabet))
        putchar(toupper(alphabet));
    else
        putchar(tolower(alphabet));
}
