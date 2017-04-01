#include<stdio.h>
int main()
{
    unsigned u;
    short s;
    long l;
    printf("Enter an unsigned integer :\a\n");
    scanf("%u",&u);
    printf("Enter a short integer :\a\n");
    scanf("%hd",&s);
    printf("Enter a long integer :\a\n");
    scanf("%ld",&l);
    printf("%u %hd %ld",u,s,l);
    return 0;
}
