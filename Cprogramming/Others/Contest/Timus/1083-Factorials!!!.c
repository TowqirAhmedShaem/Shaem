#include <stdio.h>
int main()
{
    int i,j,k = -1,sum = 1;
    char che[20];
    scanf("%d", &j);
    for(i=0;i<20;i++)
    {
        scanf("%c", &che[i]);
        if(che[i]=='\n')
            break;
        k++;
    }
    if(j%k==0)
        for(i=j;i>=k;i=i-k)
            sum = sum*i;
    else
        for(i=j;i>=1;i=i-k)
        sum=sum*i;
    printf("%d", sum);
    return 0;
}
