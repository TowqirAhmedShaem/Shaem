#include<stdio.h>
float avg()
{
    float a[10],sum=0;
    int i,j;
    printf("How much number you want to count :\n");
    scanf("%d",&j);
    printf("Give the number :\n");
    for(i=0;i<j;i++)
    {
        scanf("%f",&a[i]);
        sum+=a[i];
    }
    return (sum/j);
}
int main()
{

    float c;
    c=avg();
    printf("%f\n",c);
    return 0;
}
