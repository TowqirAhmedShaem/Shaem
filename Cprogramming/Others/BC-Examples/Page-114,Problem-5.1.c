
#include<stdio.h>
void main()
{
    int a,b,c,d;
    float ratio;
    printf("Pls give the value of four integers\a\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if((c-d)!=0)
    {
        ratio=(float)(a+b)/(float)(c-d);
        printf("Ratio= %f\a\n",ratio);
    }

}
