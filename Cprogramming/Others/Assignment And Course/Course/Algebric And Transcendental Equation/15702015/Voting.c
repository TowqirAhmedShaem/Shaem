#include<stdio.h>
int main()
{
    int a[100]={0},b,n,v,i,j;
    printf("Pls give the number of candidate :\n");
    scanf("%d",&n);
    printf("Pls give the number of voter :\n");
    scanf("%d",&b);
    printf("Press the serial number representing your favourite candidate :\n");
    for(i=0;i<b;i++)
    {
        h:
        printf("Type your vote :\n");
        scanf("%d",&v);
        if(v>n)
            {
                printf("Not valid.Vote again\n");
                goto h;
            }

        for(j=0;j<n;j++)
        {
            //count=0;
            if(v==(j+1))
                ++a[j];
        }
    }
    for(i=0;i<n;i++)
    {
        printf("Candidate %d : %d\n",i+1,a[i]);
    }
}
