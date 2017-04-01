#include<stdio.h>
int main()
{
    int i,answer;
    for(i=1;i<=12;i++)
    {
        printf("What is the answer of %d + %d ?\a\n",i,i);
        scanf("%d",&answer);

    if(answer==i+i)
        printf("You are right!!!");
    else
        printf("No! You are wrong.You answer is %d\a\n",i+i);
    return 0;
    }
}
