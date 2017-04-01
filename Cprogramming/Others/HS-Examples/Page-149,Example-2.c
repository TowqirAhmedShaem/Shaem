#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char command[80],temp[80];
    int i,j;
    for( ; ; )//This is infinite for loop,it will never stops
    {
        printf("Operation? ");
        gets(command);
        //See if user wants to stop
        if(!strcmp(command,"quit"))
            break;
        printf("Enter first number :\n");
        gets(temp);
        i=atoi(temp);
        printf("Enter second number :\n");
        gets(temp);
        j=atoi(temp);
        //Now perform the operation
        if(!strcmp(command,"add"))
            printf("%d\n",i+j);
        else if(!strcmp(command,"substract"))
            printf("%d\n",i-j);
        else if(!strcmp(command,"divide"))
        {
            if(j)
                printf("%d\n",i/j);
        }
        else if(!strcmp(command,"multiply"))
            printf("%d\n",i*j);
        else
            printf("Unknown command.\n");
    }
    return 0;
}
