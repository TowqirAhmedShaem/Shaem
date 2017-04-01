#include<stdio.h>
void main()
{
    //Arithmatic operation
    int a,b,c,d,e,x,sum,sub,div,mul,mod;
    printf("Pls give the value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("Arithmatic operation\n");
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    printf("a= %d and b= %d\n",a,b);
    printf("Sum of A+B: %d\n",sum);
    printf("Substarction of A-B: %d\n",sub);
    printf("Multification of A*B: %d\n",mul);
    printf("Division of A/B: %d\n",div);
    printf("Modulo of A%B: %d\n\n",mod);

    //Assignment operators
    printf("Assignment operation\n");
    a=10;
    printf("New value of a is:%d\n",a);
    a+=5;
    printf("The answer after adding is:%d\n",a);
    a-=10;
    printf("The answer after substracting is:%d\n",a);
    a*=5;
    printf("The answer after multipling is:%d\n",a);
    a/=5;
    printf("The answer after dividing is:%d\n\n",a);

    //Bitwise operation

    a=3; // 11
    b=2; // 10
    printf("Bitwise operation\n");
    c=a&b;
    printf("Bitwise and of a=3 and b=2:%d\n",c); //10 that means 2
    d=a|b;
    printf("Bitwise or of a=3 and b=2:%d\n",d); //11 that means 3
    e=a^b;
    printf("Bitwise Ex or of a=3 and b=2:%d\n\n",e); //01 that means 1

    //Ternary selection  operation
    printf("Ternary selection operation.\n");
    x=(a!=b)?2:5;
    printf("Afetr ternary selection operation of x :%d\n",x);


}
