#include<stdio.h>
int main()
{
    int a[100]={0},b,n,v,i,j;
    printf(" Please give the number of candidate :\n");
    scanf(" %d",&n);
    printf(" Please give the number of voter :\n");
    scanf("%d",&b);

    for(i=0;i<b;i++)
    {
        h:
        printf(" Type your vote :\n");
        scanf(" %d",&v);
        if(v>n)
            {
                printf("Not valid.Vote again\n");
                goto h;
            }
        for(j=0;j<n;j++)
        {
            if(v==(j+1))
                ++a[j];
        }
    }

    for(i=0;i<n;i++)
    {
        printf(" Candidate %d gets : %d \n",i+1,a[i]);
    }
}
