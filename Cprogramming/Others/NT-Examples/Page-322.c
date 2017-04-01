#include<stdio.h>
int main()
{
    float a=10.375;
    char *p;
    p=(char*)&a;
    printf("ptr    *ptr\n");
    printf("---    -----\n");
    printf("%x    %02x\n",p,*p);
    p++;
    printf("%x    %02x\n",p,*p);
    p++;
    printf("%x    %02x\n",p,*p);
    p++;
    printf("%x    %02x\n",p,*p);
    return 0;
}
