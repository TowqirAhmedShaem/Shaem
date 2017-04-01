#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    double pound;
    if(argc!=2)
    {
        printf("usage : Convert <ounces>\n");
        printf("Try Again!");
        exit(1); //Stop the program
    }

        pound=atof(argv[1])/16.0;
        printf("Pound : %f\n",pound);

    return 0;
}

