#include<stdio.h>
#include<stdlib.h>
int marks();
long long ids,id[3];
float ab[800],first[100],second[100],third[100],four[100],five[100],at;
int ct,bct;
int main()
{
    float total[100],atd[100],summ[100];
    char course[50],code[10];
    int k,student=0;
    printf("course name :\n");
    gets(course);
    printf("Course Code :\n");
    gets(code);
    printf("Number of CT :\n");
    scanf("%d",&ct);
    printf("Number of best CT to count:\n");
    scanf("%d",&bct);
    for(k=0;;k++)
    {
        shaem:
        printf("Pls give your id or type 100 to break:\n");
        scanf("%lld",&ids);
        if(ids==100)
            break;
        if(ids<=13000000 || ids>=15702080)
        {
            printf("Your given ID isn't found in 14th Batch.pls give right ID :\a\n");
            goto shaem;
        }
        total[k]=marks();
        printf("Total %f\n",total[k]);
        id[k]=ids;
        atd[k]=at;
        summ[k]=atd[k]+(total[k]/bct);
        first[k]=ab[0];
        second[k]=ab[1];
        third[k]=ab[2];
        four[k]=ab[3];
        five[k]=ab[4];
        student++;
    }
    printf("\n          Applied Physics,Electronics and Communication Engineering\n");
    printf("                          University of Chittagong\n");
    printf("                               %s-%s\n",course,code);
    printf("  -------------------------------------------------------------------------\n");
    printf(" |      |          |     |      |      |      |      |      |      |       |\n");
    printf(" |Serial|   ID     | Atd | CT-1 | CT-2 | CT-3 | CT-4 | CT-5 | Avg  | Total |\n");
    printf(" |      |          |     |      |      |      |      |      |      |       |\n");
    for(k=0;k<student;k++)
    {
        printf("  -------------------------------------------------------------------------\n");
        printf(" |      |          |     |      |      |      |      |      |      |       |\n");
        printf(" | %2d   | %lld | %4.1f| %5.2f| %5.2f| %5.2f| %5.2f| %5.2f| %5.2f| %5.2f |\n",k+1,id[k],atd[k],first[k],second[k],third[k],four[k],five[k],total[k]/bct,summ[k]);

    }
    printf("  -------------------------------------------------------------------------\n\n");
    printf("      Alamgir Hossain\n      Lecturer\n      University of Chittagong\n");
    printf("\n\n");
    system("pause");
    return 0;
}

int marks()
{
    int i,b,j;
    float a[100],t,sum;
    printf("Attendence :\n");
    scanf("%f",&at);
    sum=0;
    printf("Pls type %d CT number:\a\n",ct);
    for(i=0;i<ct;i++)
    {
        saem:
        printf("CT %d : ",i+1);
        scanf("%f",&a[i]);
        ab[i]=a[i];
    }
    for(i=0;i<ct;i++)
        for(b=i+1;b<ct;b++)
    {
        if(a[i]>a[b])
        {
            t=a[i];
            a[i]=a[b];
            a[b]=t;
        }
    }
    printf("\n");
    for(j=4;j>=ct-bct;j--)
        sum=sum+a[j];
    printf("Sum: %f\n",sum);

    return sum;
}
