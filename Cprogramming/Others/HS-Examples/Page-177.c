#include<stdio.h>
int main(void)
{
    int a[10]={2,3,4,5,6,7,8,9,10,11};
    int *p;
    p=a; //assign p the address of a

    //this prints a's first,second third value
    printf("%d %d %d\n",*p,*(p+1),*(p+2));
    //This also does the same thing
    printf("%d %d %d\n",a[0],a[1],a[2]);
    return 0;

}
