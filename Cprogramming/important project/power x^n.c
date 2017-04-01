#include<stdio.h>
int main()
{
    float x,y,n,a,z;
    y=1;
    printf("Pls give the value of x and n\a\n");
    scanf("%f %f",&x,&n);
    if(n>0)
    {
       a=1;

    while(a<=n)
    {
        y=y*x;
        a++;
    }
printf("%.2f to the power of %.2f : %.2f\n",x,n,y);
    }
    else
    {
        for(a=1;a<=(-n);a++)
        {
            y=y*x;

        }
     printf("%.2f to the power of %.2f : %.2f\n",x,n,1/y);
    }

}
