#include<stdio.h>
//Page-27,Fig-2.3.
main()
{
    printf("Integer values\a\n\n");
    printf("%d-%d-%d",32767,32767+1,32767+10);
    printf("\n");
    printf("Long integer values\n\n");
    printf("%d-%d-%d",32767L,32767L+1L,32767+10L);
}
