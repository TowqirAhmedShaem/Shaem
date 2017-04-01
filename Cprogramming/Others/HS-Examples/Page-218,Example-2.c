#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    double pound;
    pound=atof(argv[1])/16.0;
    printf("Pounds : %f\n",pound);
    return 0;
}
