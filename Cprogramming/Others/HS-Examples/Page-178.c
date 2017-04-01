#include<stdio.h>
int main()
{
    char c[]="Pointers are fun";
    char *p;
    int i;
    p=c;
    //loop until null is found
    for(i=0;p[i];i++)
        printf("%c",p[i]);
    return 0;
}
