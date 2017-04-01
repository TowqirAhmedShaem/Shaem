#include<stdio.h>
int main(void)
{
    int *p,q;
    p=&q;
    q=1;
    printf("%p\n",p);
    (*p)++; //Noow q is incremented but p remains unchanged
    printf("%d %p",q,p);
    return 0;
}
