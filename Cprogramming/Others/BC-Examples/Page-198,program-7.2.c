#include<stdio.h>
#define max 50
#define counter 11
int main()
{
    float a[50];
    int grp[counter]={0,0,0,0,0,0,0,0,0,0,0};
    int l[11],h[11],n,i,x,y;
    printf("Pls give the last number :\a\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
        ++grp[(int)(a[i])/10];
    }
    printf("\n");
    printf("Grouph Range Frequency\n");
    x=0;y=9;
    l[i]=10;
    h[i]=10;
    i=0;
    while(i<11)
    {

        printf("%d  %d to %d %d\n",i+1,x,y,grp[i]);
        x+=l[i];
        y+=h[i];
        i++;
        //l[i]=x;
        //h[i]=y;

    }
}
