#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int i;
    double d;
    long l;
    i=atoi(argv[1]);
    d=atof(argv[3]);
    l=atol(argv[2]);
    printf("%d %ld %ld",i,l,d);
    return 0;
}
