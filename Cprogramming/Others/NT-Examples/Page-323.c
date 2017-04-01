#include<stdio.h>
#include<conio.h>
int main()
{
    char ch[6]="acegik";
    int *ptr;
    ptr=(int*)&ch;
    printf("Ptr   *ptr\n");
    printf("---    -----\n");
    printf("%x   %02x\n",ptr,*ptr);
    ptr++;
    printf("%x   %02X\n",ptr,*ptr);
    ptr++;
    printf("%x   %02X\n",ptr,*ptr);

}
