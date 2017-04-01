#include<stdio.h>
int main()
{
    int num,i;
    char a[][3]={
    1,1,1,
    2,4,8,
    3,9,27,
    4,16,64,
    5,25,125,
    6,36,216
    };
    printf("Enter cube number :\n");
    scanf("%d",&num);
    for(i=0;i<6;i++)
        if(num==a[i][2])
    {
        printf("Root is :%d\n",a[i][0]);
        printf("Square is : %d\n",a[i][1]);
        break;
    }
    if(i==6)
        printf("Cube not exist");
    return 0;
}
