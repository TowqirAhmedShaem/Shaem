//Program to test the character type
//code was made by shaem_di_silva.
#include<stdio.h>
#include<ctype.h>
main()
{
    char character;
    printf("Please press any key\a\n");
    character=getchar();
    if(isalpha(character)>0)
        printf("Your given character is  a letter\a\n");
    else if(isdigit(character)>0)
        printf("Your given character is a digit\a\n");
    else
        printf("Your given character is not alphanumeric\a\n");
}
