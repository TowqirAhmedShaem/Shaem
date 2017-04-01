#include<stdio.h>
main()
{
    char answer;
    printf("Hey You!Do You want to know my name?\a\n");
    printf("Type y for yes and type n for no\a\n");
    answer=getchar();//Reading a character
    if(answer=='y'||answer=='Y')
        printf("My name is shaem\a\n");
    else
        printf("You are good for nothing\a\n");
}
