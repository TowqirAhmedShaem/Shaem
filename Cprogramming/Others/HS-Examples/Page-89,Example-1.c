#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<15;i++)
    {
        printf("%d ",i);
        if(i==10)
            break; //Exist the loop.
    }
    printf("\n\a");
    return 0;
}
