#include<stdio.h>
int xor(int a,int b);
int main()
{
    int p,q;
    printf("enter the value of p (0 or 1)\a\n");
    scanf("%d",&p);
    printf("enter the value of q (0 or 1)\a\n");
    scanf("%d",&q);
    printf("p and q : %d\n",p&&q);
    printf("p or q : %d\n",p||q);
    printf("p xor q : %d\n", xor(p,q));
    return 0;
}
int xor(int a,int b)
{
    return (a||b) && !(a&&b);// XOR= (A+B)(AB)^prime
}
