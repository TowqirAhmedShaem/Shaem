#include<stdio.h>
int main()
{
    int a[8],i,j,mode,count,oldcount,oldmode;
    printf("Pls give 8 numbers :\a\n");
    for(i=0;i<8;i++)
    scanf("%d",&a[i]);
    oldcount=0;
    //find the mode
    for(i=0;i<8;i++)
    {
        mode=a[i];
        count=1;
        //count the occurrences of this values
        for(j=i+1;j<8;j++)
            if(mode==a[j])
            count++;
        //if count is greater than old count,use new mode
        if(count>oldcount)
        {
            oldmode=mode;
            oldcount=count;
        }

    }
    printf("The mode is : %d\n",oldmode);
    return 0;
}
