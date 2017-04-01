#include<stdio.h>
main()
{
    int no;
    char name1[15],name2[15],name3[15];
    printf("Enter serial number and name one\a\n");
    scanf("%d %15c",&no,&name1);
    printf("%d %15s\n",no,name1);
    printf("Enter serial number and name two\a\n");
    scanf("%d %s",&no,&name2);
    printf("%d %15s\n",no,name2);
    printf("Enter serial number and name three\a\n");
    scanf("%d %15s",&no,&name3);
    printf("%d %15s\n",no,name3);
}
