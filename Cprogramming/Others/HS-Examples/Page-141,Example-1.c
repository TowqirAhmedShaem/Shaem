#include<stdio.h>
int main()
{
    int temp[31],i,days,avg,min,max;
    printf("How many days in your month?\a\n");
    scanf("%d",&days);
    for(i=0;i<days;i++)
    {
        printf("Enter noonday tempature for day :%d",i+1);
        scanf("%d ",&temp[i]);
    }

    //Find average
    avg=0;
    for(i=0;i<days;i++)
        avg=avg+temp[i];
    printf("Avergae Temperature : %d\n",avg/days);
    //Finding minimum and maximum
    min=200;
    max=0;
    for(i=0;i<days;i++)
    {
        if(min>temp[i])
            min=temp[i];
        if(max<temp[i])
            max=temp[i];
    }
    printf("Minimum temperature : %d\n",min);
    printf("maximum temperature : %d\n",max);
    return 0;
}
