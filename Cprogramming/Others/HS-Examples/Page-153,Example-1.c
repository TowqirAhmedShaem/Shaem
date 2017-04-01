#include<stdio.h>
int main()
{
    int bball[4][2];
    int i ,j;
    for(i=0;i<4;i++)
        for(j=0;j<2;j++)
    {
        printf("Quarter %d, Player %d\n",i+1,j+1);
        printf("Enter number of points :\n");
        scanf("%d",&bball[i][j]);
    }
    //Display results
    for(i=0;i<4;i++)
        for(j=0;j<2;j++)
    {
        printf("quarter %d, Player %d : ",i+1,j+1);
        printf("%d",bball[i][j]);
    }
}
