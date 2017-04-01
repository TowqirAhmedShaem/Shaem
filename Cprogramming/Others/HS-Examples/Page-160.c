#include<stdio.h>
#include<string.h>
#include<ctype.h>

char word[][2][40]={
"DOG", "Hund",
"NO", "Nein",
"YEAR", "Jahr",
"i", "Ich",
"drive", "fahren",
"house", "haus",
"to", "zu",
"", ""
};
int main()
{
    char english[80];
    int i;
    for(; ;)
    {
    printf("Enter english word and type(close) for quit:\a\n");
    gets(english);
    if(!strcmp(english,"close"))
        break;
    for(i=0;i<80;i++)
        english[i]=toupper(english[i]);
    //Look up the word
    i=0;
    while(strcmp(word[i][0],""))
    {
        if(!strcmp(english,word[i][0]))
        {
            printf("German Translation : %s\n",word[i][1]);
            break;
        }
        i++;
    }

        if(strcmp(english,word[i][0]))
            printf("No Meaning or Not in dictionary\n");
    }
    return 0;
}
