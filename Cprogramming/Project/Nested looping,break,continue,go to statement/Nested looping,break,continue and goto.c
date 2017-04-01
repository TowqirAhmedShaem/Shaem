#include<stdio.h>
void main()
//This code is about break,continue and goto.
{
    //Break

    int i,j;

    for(i=1;i<=20;i++)
    {
        if(i>=5)break;
        printf("Namta for:%d\n",i);
        for(j=1;j<=10;j++)
        {
            printf("%dx%d=%d\n",i,j,(i*j));

        }

    }

    //Continue


    for(i=1;i<=20;i++)
    {
        if(i==4)continue;
        printf("Namta for:%d\n",i);
        for(j=1;j<=10;j++)
        {
            printf("%dx%d=%d\n",i,j,(i*j));

        }

    }

    // Go to

    for(i=1;i<=20;i++)
    {
        if(i==5)goto namta5;
        printf("Namta for:%d\n",i);
        for(j=1;j<=10;j++)
        {
            printf("%dx%d=%d\n",i,j,(i*j));

        }

    }
    namta5:
        printf("You have put 5.And we didn't calculate namta for 5");

}

