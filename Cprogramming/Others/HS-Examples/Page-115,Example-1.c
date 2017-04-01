#include<stdio.h>
int shaem();
int count;//this is global variable
int main()
{
    count=10;
    shaem();
    printf("Count in main() : %d\n",count);
    return 0;
}
int shaem()
{
    int count=100;// This is local variable
    printf("Count in Shaem() : %d\n",count);
    return 0;

    //the output is count in Shaem() :100
    //count in main() :10. This is because a compiler always use the local variable when it finds global and local variable in same name.
    // See page 116
}
