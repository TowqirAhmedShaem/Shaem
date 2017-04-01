#include<stdio.h>
int main()
{
    double l,w,d,o;
    int i,count,n;
    printf("Pls give the bag number :\a\n");
    scanf("%d",&n);
    count=0;
    for(i=0;i<n;++i)
    {
        scanf("%lf %lf %lf %lf",&l,&w,&d,&o);
        if(((l<=56&&w<=45&&d<=25)||(l+w+d<=125))&&o<=7)
        {
            printf("1\n");
            count++;
        }
        else
            printf("0\n");
    }
    printf("Count : %d\n",count);
    return 0;
}
