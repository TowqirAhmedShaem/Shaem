#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
    if(argc!=2)
    {
        printf("Specify a password :\n");
        exit(1);
    }
    if(!strcmp(argv[1],"password"))
        printf("Access permitted\n");
    else
        printf("Access Denied\n");
    return 0;
}
