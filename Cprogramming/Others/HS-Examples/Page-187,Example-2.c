#include<stdio.h>
#include<string.h>
int main()
{
    char *p[][2]={
            "red delicious", "red",
            "golden delicious", "yellow",
            "winesap", "red",
            "gala", "reddish orange",
            "lodi", "green",
            "jonathan", "red",
            "", ""//Terminate the table with null string
            };
    int i;
    char apple[50];
    h:
    printf("Enter the name of apple :\n");
    gets(apple);
    for(i=0;*p[i][0];i++)
    {
        if(!strcmp(p[i][0],apple))
            printf("%s\n",p[i][1]);
    }
    goto h;
    return 0;
}
