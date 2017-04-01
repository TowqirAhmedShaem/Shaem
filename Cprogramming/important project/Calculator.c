//code was made by shaem_di_silva
//Programming code of calculator.
#include<stdio.h>
void main()
{
    int a,b,c,d,e,f,sum,sub,mul;
    float g,h,div;
    char calculator;
    printf("\apress\n+ For Addition\n- For Substraction\n* For Multiplication\n/ For Division\n");
    scanf("%c",&calculator);
    switch (calculator)
    {
        case '+':
            printf("Please give the values \a\n");
            scanf("%d%d",&a,&b);
            sum=a+b;
            printf("\n\nSum:%d\a\n",sum);
            break;
        case '-':
            printf("Please give the values of \a\n");
            scanf("%d%d",&c,&d);
            sub=c-d;
            printf("Substraction:%d\a\n",sub);
            break;
        case '*':
            printf("Please give the values \a\n");
            scanf("%d%d",&e,&f);
            mul=e*f;
            printf("Multiplication:%d\a\n",mul);
            break;
        case '/':
            printf("Please give the values\a\n");
            scanf("%f%f",&g,&h);
            div=g/h;
            printf("Division:%.2f\a\n",div);
           break;
       /*default:
            break;*/

    }
    system("pause");
}
