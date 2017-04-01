#include<stdio.h>
int shaem(char *a,char *b);
int main()
{
    char c[50];
    shaem(c,"I love Paira");
    printf("%s\n",c);
    return 0;
}
int shaem(char *a,char *b)
{
    if(*b) //If not at the end of string
    {
        *a=*b;
        a++;b++;
        *a='\0'; //Null terminate the string
        shaem(a,b);
    }
    //else
       //*a='\0';
}
