#include<stdio.h>
int main()
{
    char *i="one";
    char *j="two";
    char *k="three";
    printf("%s %s %s\n",i,j,k);
    printf("%s %s %s\n",k,j,i);
    return 0;
}
