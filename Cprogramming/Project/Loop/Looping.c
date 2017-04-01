#include<stdio.h>
void main()
{
    //For Loap
    int sum,i;
    //sum=1+2+3+4+5+6+7+8+9+10
    sum=0;
     for(i=1;i<=10000;i++)
     {
      sum=sum+i;
     }
     printf("%d\n",sum);


     // While Loap
     char ch;
     int a,b,c;
     scanf("%c",&ch);
     ch=toupper(ch);
     while (ch!='Q')
    {
        scanf("%d%d",&a,&b);
     c=a+b;
     printf("%d",c);
     scanf("%c",&ch);
     ch=toupper(ch);
     }

     // Do While loap
     //The difference between while loap and do-while loap.
     //At first Do-while loap executes the code  and then maintains the conditions.
     //But at first while loap maintains the condition and then executes the code.
     //If we want to run the while loap/do-while loap,we have to stop another do-while/while loap.


     /*char ch;
     int a,b,c;
     scanf("%c",&ch);
     ch=toupper(ch);
     do
    {
        scanf("%d%d",&a,&b);
     c=a+b;
     printf("%d",c);
     scanf("\n%c",&ch);
     ch=toupper(ch);
     }while (ch!='Q'); */
}
