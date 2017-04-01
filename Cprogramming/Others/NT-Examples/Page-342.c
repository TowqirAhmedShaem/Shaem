#include<stdio.h>
int main()
{
    int x[3][4]={1,2,3,9,8,7,3,4,5,5,6,7};
    int i,j,*p;
    p=x;
    printf("x=%x p=%x\n",x,p);
    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
        printf("&x[%d][%d]=%x p=%x x[%d][%d]=%d *p=%d *p=%d\n",i,j,&x[i][j],p+i*4+j,i,j,x[i][j],*(p+i*4+j),*(*(p+i)+j));
}
