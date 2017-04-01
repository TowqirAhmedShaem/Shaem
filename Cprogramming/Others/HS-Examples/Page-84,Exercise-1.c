#include<stdio.h>
int main()
{
    float dis,sp;
    int num;
    printf("Enter the number of drive time computation :\a\n");
    //scanf("%d",&num);
    while(scanf("%d",&num))
    {
        printf("Dis : Sp :");
        scanf("%f %f",&dis,&sp);
        printf("Time : %f\n",dis/sp);
        num--;
    }
    return 0;
}
