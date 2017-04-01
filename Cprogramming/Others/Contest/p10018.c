#include<stdio.h>
int i,r, s, t,count,q, y, u, v, e,x,y,z, n;
int a[], d[];
int rev(int s)
{
    r=0;
    while(s!=0)
    {
        r=r*10;
        r=r+s%10;
        s=s/10;
    }

    return r;
}

int call(int z)
{
    count=1;
    for(i=0; ;count++, i++)
    {
        d[i]= a[i] + rev(a[i]);

        if(d[i]== rev(d[i]))
        {
            printf("%d yay\n %d", d[i],count);
            break;
        }
        else
        {
            a[i+1]=d[i];
        }

    }
}
int main()
{
    scanf("%d", &n);
    a[0]=n;
    if(a[0]==rev(n))
        printf("your input is blah");
    else
        call(a[0]);
    return 0;
}
x;
