#include<stdio.h>
int main()
{
    int num,i;
    printf("Type  a number to test :\a\n");
    scanf("%d",&num);
    for(i=2;i<(num/2)+1;i++)
        if((num%i)==0)
        printf("%d\n",i);
    return 0;
}
