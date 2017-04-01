#include<stdio.h>
int main()
{
    int i=0,j=0;
    int size;
    int c[10][10];
    printf("Give the size :\n");
    scanf("%d",&size);
    for(i=0;i<size;i++)
        for(j=0;j<size;j++)
    {
        printf("Enter Element[%d][%d]=",i+1,j+1);
        scanf("%d",&c[i][j]);
    }
    printf("Your given matriz :\n");
    for(i=0;i<size;i++)
        {for(j=0;j<size;j++)

            printf("%d ",c[i][j]);
            printf("\n");
        }
        i=0;
        while(size>=0)
        {
            for(j=0;j<size;j++)
                printf("%d ",c[i][j]);
            for(i=1;i<size;i++)
                printf("%d ",c[i][3]);
            for(j=size-2;j>=0;j--)
                printf("%d ",c[3][j]);
            for(i=size-2;i>=1;i--)
                printf("%d ",c[i][0]);
            i+=1;
            size-=1;
        }
        return 0;

}
