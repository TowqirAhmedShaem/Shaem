#include<stdio.h>
int main()
{
    float dis,vel;
    int num;
    printf("Enter the number of drive the computations\a\n ");
    scanf("%d",&num);
    for(;num;num--)
    {
        printf("Enter the distancea\n");
        scanf("%f",&dis);
        printf("Enter the velocity\a\n");
        scanf("%f",&vel);
        printf("Time : %f\n",dis/vel);
    }
}
