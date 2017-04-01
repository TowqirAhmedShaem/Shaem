#include<stdio.h>
main()
{

    char address[100];
    printf("Please type the address\a\n");
    scanf("%[a-z]",address);
    printf("%-100s",address);

/*
    char address[80];
    printf("Please type the address\a\n");
    scanf("%[^\n]",address);
    printf("%s\n\n",address);
     */
}
