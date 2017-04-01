#include<stdio.h>
main()
{
    int a;
    float b;
    char c;
    printf("Enter the values of  a,b and c\a\n");
    if(scanf("%d %f %c",&a,&b,&c)==3)
        printf("a=%d b=%f c=%c",a,b,c);
    else
        printf("Error in input\a");
}
