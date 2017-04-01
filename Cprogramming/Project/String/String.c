#include<stdio.h>
//Code is made by Towqir Ahmed Shaem.
//This code is about string.There are some methods of taking and showing input and output.
void main()
{

    /*
    char str[30];
    printf("Please give a sentence\n");
    scanf("%s",&str); //When we give a sentece like(I eat rice),it shows output inly (i).Why? It's solution is regarded below.
    printf("%s",str);
    */
    //
    char str[30];
    printf("Please give a sentence\n");
    scanf("%[^\n]",&str); //%[^\n] it means code will take input until we press enter.
    printf("%s",str);
    //
    /*
    char str[30];
    printf("Please give a sentence\n");
    scanf("%[^a]",&str); //%[^\n] it means code will take input until we press a.
    printf("%s",str);
    */
    /*
    char str[30];
    printf("Please give a sentence\n");
    scanf("%[^.]",&str); //%[^\n] it means code will take input until we press .
    printf("%s",str);
    */
    //
    //Most easiest way.
    /*
    char str[30];
    printf("Please give a sentence\n");
    gets(str);
    puts(str);
    */
    //


}
