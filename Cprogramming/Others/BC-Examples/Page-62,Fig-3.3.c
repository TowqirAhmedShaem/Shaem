//code was made by shaem_di_silva.
//Page-62,Fig-3.3
#include<stdio.h>
main()
{
    int a,b,c,d;
    a=15;
    b=10;
    c=++a-b;
    printf("a=%d\tb=%d\tc=%d\n",a,b,c);
    d=b++ +a;
    printf("a=%d b=%d d=%d\n",a,b,d);
    printf("a/b =%d\n",a/b);
    printf("a%%b=%d\n",a%b);
    printf("a*=b =%d\n",a*=b);
    printf("%d\n",c>d?5:0);
    printf("%d\n",c<d?5:0);
}
