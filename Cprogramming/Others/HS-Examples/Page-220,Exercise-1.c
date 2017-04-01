#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[2])
{
    int i;
    if(argc!=3)
    {
        printf("You must specify two arguments\n");
        exit(1);
    }
    i=strcmp(argv[1],argv[2]);
    if(i<0)
        printf("%s > %s",argv[2],argv[1]);
    else if(i>0)
        printf("%s > %s ",argv[1],argv[2]);
    else
        printf("They are equal\n");
    return 0;
}
