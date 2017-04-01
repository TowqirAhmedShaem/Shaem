#include<stdio.h>
main()
{
    int a,j,i;
    printf("Please give the number of line\a\n");
    scanf("%d",&a);
    printf("\n");
    for(i=0;i<=a;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",(i*j));
        }
        printf("\n");
    }
    
}
