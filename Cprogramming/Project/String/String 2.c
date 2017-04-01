//Code is made by Towqir Ahmed Shaem.
//This code is about the study of measuring length of a sentence.
//There are some alternative solutions of above problem.

#include<stdio.h>
void main()
{
    char str[30];
    int i,len=0;
    printf("Pls give a sentence or word\n");
    gets(str);
    for(i=0;i<30;i++)
    {
        if(str[i]!='\0')
            {
                len++;
            }
        else
        break;
    }
    printf("Length is:%d",len);
}
//
/*
#include<string.h>
void main()
{
    char str[30];
    int len;
    printf("Pls give a sentence or word\n");
    gets(str);
    len=strlen(str); //Here strlen() is a library function.
    printf("Length is :%d",len);
}
*/
/*
#include<string.h>
#include<ctype.h>
void main()
{
char str[30];
int len,convert;
printf("Pls give a sentence or word\n");
gets(str);
len=strlen(str);//Here strlen() is a library function which provides the total length of a word/sentence.
convert=atoi(str); //Here atoi() also a library function which provides the integer input values.
printf("Length is :%d\nNumber is :%d",len,convert);
}
*/
