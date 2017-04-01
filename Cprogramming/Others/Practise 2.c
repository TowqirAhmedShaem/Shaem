#include<stdio.h>
#include<string.h>
#include<stdlib.h>
float gradepoint(float x);
char lettergrade(float x);

int main()
{
    int i,i1,j,k,l,m,n,n1,o,p,q,r;
    int count=0,count1=0,credit[100][100],course[100][100];
    char c_name[][100][10]={
                                     "111", "Basic Electrical Engineering", "APECE 111",
                                     "112", "Laboratory on Basic Electrical Engineering", "APEC 112",
                                     "113", "Basic Mechanical Engineering", "APEC 113",
                                     "114", "Laboratory on Basic Mechanical Engineering", "APEC 114",
                                     "151", "Technical English", "ENG 151",
                                     "161", "Differential and Integral Calculus", "MATH 161",
                                     "171", "Properties of Matter,Classical Mechanics\nand Applied Acoustics", "PHY 171",
                                     "172", "Laboratory on Properties of Matter,Classical Mechanics and Applied Acoustics", "PHY 172",
                                     "",""
    };
    char sum_l[100][100]={"shaem"};
    char xl1[2]={"A+"},xl2[2]={"A"},xl3[2]={"A-"},xl4[2]={"B+"},xl5[2]={"B"},xl6[2]={"B-"},xl7[2]={"C+"},xl8[2]={"C-"},xl9[2]={"D"},xl10[2]={"F"};
    long long id[100];
    float ct[100],cti,sum[100][100],sum_p[100][100],at,lat,lv,lq,lr;
    float thr,e111,ect,esum;
    for(i=0;i<100;i++)
    {
        printf("Pls give the ID And Press 0 For Close : ");
        scanf("%lld",&id[i]);
        if(id[i]==0)
            break;

    for(i1=0;i1<12;i1++)
    {
        first:
        printf("Course  Code  : ");

        scanf("%d",&course[i][i1]);
        if(course[i][i1]==5)
            break;
        else if(course[i][i1]%2==0)
        {
        printf("Course Credit : ");
        scanf("%d",&credit[i][i1]);
        printf("Lab Attendance : ");
        scanf("%f",&lat);
        printf("Quiz Marks : ");
        scanf("%f",&lq);
        printf("Viva Marks : ");
        scanf("%f",&lv);
        printf("Lab Report Marks : ");
        scanf("%f",&lr);
        sum[i][i1]=lat+lq+lv+lr;
        if(sum[i][i1]>(credit[i][i1]*25))
        {
            printf("Your Given Total Marks Is greater Than Credit Offered(Credit*25)\nPls Give The Perfect Marks\n");
            goto first;
        }
        sum[i][i1]=(100.0*sum[i][i1])/(credit[i][i1]*25); //**
        /*
        if(sum[i][i1]>=80 && sum[i][i1]<=100)
            strcpy(sum_l[i][i1],xl1);
        else if(sum[i][i1]>=75 && sum[i][i1]<80)
            strcpy(sum_l[i][i1],xl2);
        else if(sum[i][i1]>=70 && sum[i][i1]<75)
            strcpy(sum_l[i][i1],xl3);
        else if(sum[i][i1]>=65 && sum[i][i1]<70)
            strcpy(sum_l[i][i1],xl4);
        else if(sum[i][i1]>=60 && sum[i][i1]<65)
            strcpy(sum_l[i][i1],xl5);
        else if(sum[i][i1]>=55 && sum[i][i1]<60)
            strcpy(sum_l[i][i1],xl6);
        else if(sum[i][i1]>=50 && sum[i][i1]<55)
            strcpy(sum_l[i][i1],xl7);
        else if(sum[i][i1]>=45 && sum[i][i1]<50)
            strcpy(sum_l[i][i1],xl8);
        else if(sum[i][i1]>=40 && sum[i][i1]<45)
            strcpy(sum_l[i][i1],xl9);
        else if(sum[i][i1]<40)
            strcpy(sum_l[i][i1],xl10);


        //sum_l[i][i1]=lettergrade(sum[i][i1]);*/

        sum_p[i][i1]=gradepoint(sum[i][i1]);
         count++;
        }
        else
        {
        printf("Course Credit : ");
        scanf("%d",&credit[i][i1]);
        printf("Type The CT Number : ");
        scanf("%d",&n);

        //CT input
        for(j=0;j<n;j++)
        {
            printf("CT %d : ",j+1);
            scanf("%f",&ct[j]);
            //sum=sum+ct;
        }
        //sorting ct marks
        for(j=0;j<n;j++)
            for(k=j+1;k<n;k++)
        {
            if(ct[j]>ct[k])
            {
                cti=ct[j];
                ct[j]=ct[k];
                ct[k]=cti;
            }
        }
        printf("How Many CT Number You Want To Count : ");
        scanf("%d",&n1);
        printf("Give The Attendance : ");
        scanf("%f",&at);
       // sum[i][i1]=0;
        sum[i][i1]=at;
        for(j=n;j>=n-n1;j--)
            sum[i][i1]=sum[i][i1]+ct[j];
        printf("CT=%f\n",sum[i][i1]);
        printf("Enter Theoritical Number : ");
        scanf("%f",&thr);
        sum[i][i1]+=thr;
        printf("%f\n",sum[i][i1]);
        sum[i][i1]=(100.0*sum[i][i1])/(credit[i][i1]*25); //**
        printf("last %f\n",sum[i][i1]);
       /*
        if(sum[i][i1]>=80 && sum[i][i1]<=100)
            strcpy(sum_l[i][i1],xl1);
        else if(sum[i][i1]>=75 && sum[i][i1]<80)
            strcpy(sum_l[i][i1],xl2);
        else if(sum[i][i1]>=70 && sum[i][i1]<75)
            strcpy(sum_l[i][i1],xl3);
        else if(sum[i][i1]>=65 && sum[i][i1]<70)
            strcpy(sum_l[i][i1],xl4);
        else if(sum[i][i1]>=60 && sum[i][i1]<65)
            strcpy(sum_l[i][i1],xl5);
        else if(sum[i][i1]>=55 && sum[i][i1]<60)
            strcpy(sum_l[i][i1],xl6);
        else if(sum[i][i1]>=50 && sum[i][i1]<55)
            strcpy(sum_l[i][i1],xl7);
        else if(sum[i][i1]>=45 && sum[i][i1]<50)
            strcpy(sum_l[i][i1],xl8);
        else if(sum[i][i1]>=40 && sum[i][i1]<45)
            strcpy(sum_l[i][i1],xl9);
        else if(sum[i][i1]<40)
            strcpy(sum_l[i][i1],xl10);
        printf("%s",sum_l[i][i1]);*/

        sum_p[i][i1]=gradepoint(sum[i][i1]);

        count++;

        }


    }
    count1++;

    }

    //Print Output
    printf("Course Code  Course Title  Credits  Letter-Grade  Grade Point\n");
    for(i=0;i<count1;i++)
        {
            for(i1=0;i1<count;i1++)
        {
            printf("%3d    %1d   ",course[i][i1],credit[i][i1]);
            lettergrade(sum_l[i][i1]);
            printf("   %4.2f\n",sum_p[i][i1]);
        }
        printf("2nd\n");
        }
    return 0;

}


char lettergrade(float x)
{


    if(x>=80 && x<=100)
        printf("A+");
    else if(x>=75 && x<80)
        printf("A");
    else if(x>=70 && x<75)
        printf("A-");
    else if(x>=65 && x<70)
        printf("B+");
    else if(x>=60 && x<65)
        printf("B");
    else if(x>=55 && x<60)
        printf("B-");
    else if(x>=50 && x<55)
        printf("C+");
    else if(x>=45 && x<50)
        printf("C");
    else if(x>=40 && x<45)
        printf("D");
    else if(x<40)
        printf("F");


}


float gradepoint(float x)
{
    float xp;

    if(x>=80 && x<=100)
        xp=4.00;
    else if(x>=75 && x<80)
        xp=3.75;
    else if(x>=70 && x<75)
        xp=3.50;
    else if(x>=65 && x<70)
        xp=3.25;
    else if(x>=60 && x<65)
        xp=3.00;
    else if(x>=55 && x<60)
        xp=2.75;
    else if(x>=50 && x<55)
        xp=2.50;
    else if(x>=45 && x<50)
        xp=2.25;
    else if(x>=40 && x<45)
        xp=2.00;
    else if(x<40)
        xp=0.00;

    return xp;
}
