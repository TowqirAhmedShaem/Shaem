#include<stdio.h>
char *p[]={"input exceeds field width","out of range","printer not turned on"};
void error(int err_num)
{
   printf(p[err_num]);
}
