#include<stdio.h>
int main()
{
    int total,i,j;
    total=0;
    do{
        printf("Enter first number (o to stop):\a\n");
        scanf("%d",&i);
        printf("Enter second number :\a\n");
        scanf("%d",&j);
        if(i!=j)
        {
            printf("Mismatch!!!");
            continue;
        }
        total=total+i;
    }while(i);
    printf("Total is %d\n",total);
    return 0;
}
