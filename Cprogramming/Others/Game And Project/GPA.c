#include<stdio.h>
#include<string.h>
#include<stdlib.h>
float gradepoint(float x);
int Coursename(int x);

int main()
{
    int i,i1,j,k,l,m,n,n1,o,p,q,r;
    int count=0,count1=0,credit[100][100],course[100][100],credt;
    long long id[100];
    float ct[100],cti,sum[100][100],sum_p[100][100],result=0,at,lat,lv,lq,lr;
    float thr,e111,ect,esum;
    printf("Press 555 For Previous Input\a\nPress 888 For Previous ID's Value Input\nPress 5 For Stop Taking Course Value For Any ID\nAnd Press 0 For Output\n\a\n");
    for(i=0;;i++)
    {
        changeid:
        newid:
        printf("Pls give the ID And Press 0 For Close : ");
        scanf("%lld",&id[i]);
        if(id[i]==0)
            break;
        if(id[i]==555)
            goto newid;

    for(i1=0;i1<12;i1++)
    {

        coursecode:
        credit1:
        credit2:
        printf("Course  Code  : ");
        scanf("%d",&course[i][i1]);
        if(course[i][i1]==5)
            break;
        else if(course[i][i1]==555)
            goto coursecode;
        else if(course[i][i1]==888)
            goto changeid;
        else if(course[i][i1]%2==0)
        {
        attendance2:
        printf("Course Credit : ");
        scanf("%d",&credit[i][i1]);
        if(credit[i][i1]==555)
            goto credit2;
        if(credit[i][i1]==888)
            goto changeid;
        first:
        quizmarks:
        printf("Lab Attendance : ");
        scanf("%f",&lat);
        if(lat==555)
            goto attendance2;
        if(lat==888)
            goto changeid;
        viva:
        printf("Quiz Marks : ");
        scanf("%f",&lq);
        if(lq==555)
            goto quizmarks;
        if(lq==888)
            goto changeid;
        report:
        printf("Viva Marks : ");
        scanf("%f",&lv);
        if(lv==555)
            goto viva;
        if(lv==888)
            goto changeid;

        printf("Lab Report Marks : ");
        scanf("%f",&lr);
        if(lr==555)
            goto report;
        if(lr==888)
            goto changeid;

        sum[i][i1]=lat+lq+lv+lr;
        if(sum[i][i1]>(credit[i][i1]*25))
        {
            printf("Your Given Total Marks Is greater Than Credit Offered(Credit*25)\nPls Give The Perfect Marks\n");
            goto first;
        }

        sum[i][i1]=(100.0*sum[i][i1])/(credit[i][i1]*25); //**
        sum_p[i][i1]=gradepoint(sum[i][i1]);
         count++;
        }
        else
        {
        ctnumber:
        printf("Course Credit : ");
        scanf("%d",&credit[i][i1]);
        if(credit[i][i1]==555)
            goto credit1;
        if(credit[i][i1]==888)
            goto changeid;
        ctcount:
        printf("Type The CT Number : ");
        scanf("%d",&n);
        if(n==555)
            goto ctnumber;
        if(n==888)
            goto changeid;
        if(n==1)
        {
            n1=1;
            goto next;
        }
        ctmarks:
        printf("How Many CT Number You Want To Count : ");
        scanf("%d",&n1);
        if(n1==555)
            goto ctcount;
        if(n1==888)
            goto changeid;
        next:
        //CT input
        for(j=0;j<n;j++)
        {

            printf("CT %d : ",j+1);
            scanf("%f",&ct[j]);
            if(ct[j]==555)
                goto ctmarks;
            if(ct[j]==888)
                goto changeid;
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

        theoritical:
        attendance:
        printf("Give The Attendance : ");
        scanf("%f",&at);
        if(at==555)
            goto attendance;
        if(at==888)
            goto changeid;

        sum[i][i1]=at;
        for(j=n-1;j>=n-n1;j--)
            sum[i][i1]=sum[i][i1]+ct[j];
        printf("CT=%f\n",sum[i][i1]);

        printf("Enter Theoritical Number : ");
        scanf("%f",&thr);
        if(thr==555)
            goto theoritical;
        if(thr==888)
            goto changeid;
        sum[i][i1]+=thr;
        sum[i][i1]=(100.0*sum[i][i1])/(credit[i][i1]*25); //**
        sum_p[i][i1]=gradepoint(sum[i][i1]);
        printf("\n");
        count++;

        }


    }
    count1++;
    credt=0;
    }

    //Print Output
    printf("\n\n\n                         University Of Chittagong\n");
    printf("       Department Of Applied Physics,Electronics & Communication Engineering\n");
    printf("                                Grade Sheet\n\n");

    for(i=0;i<count1;i++)
        {

            printf("Student ID : %lld\n\n",id[i]);
            printf("          -----------------------------------------------------\n");
            printf("         | Course Code  | Credits | Letter-Grade | Grade Point |\n");
            printf("          -----------------------------------------------------\n");
            for(i1=0;i1<count;i1++)
        {

            printf("         |  ");
            Coursename(course[i][i1]);
            printf(" %3d   |   %1d     |      ",course[i][i1],credit[i][i1]);
            gradepoint(sum[i][i1]);
            printf("      |     %4.2f    |\n",sum_p[i][i1]);
            printf("          -----------------------------------------------------\n");
             result+=sum_p[i][i1]*credit[i][i1];
             credt=credt+credit[i][i1];
        }
        printf("\n GPA : %.2f\n",result/credt);
        }
    return 0;

}


int Coursename(int x)
{


    if(x==151)
        printf("ENG  ");
    else if(x==161 || x==261 || x==361 || x==461)
        printf("MATH ");
    else if(x==171 || x==172 || x==371 || x==372)
        printf("PHY  ");
    else if(x==251)
        printf("ECO  ");
    else if(x==271)
        printf("CHEM ");
    else if(x==351)
        printf("ACCO ");
    else if(x==451)
        printf("LAW  ");
    else if(x==471)
        printf("STAT ");
    else
        printf("APEC ");



}



float gradepoint(float x)
{
    float xp;

    if(x>=80 && x<=100)
        {printf("A+");
        xp=4.00;}
    else if(x>=75 && x<80)
        {printf("A ");
        xp=3.75;}
    else if(x>=70 && x<75)
        {printf("A-");
        xp=3.50;}
    else if(x>=65 && x<70)
        {printf("B+");
        xp=3.25;}
    else if(x>=60 && x<65)
        {printf("B ");
        xp=3.00;}
    else if(x>=55 && x<60)
        {printf("B-");
        xp=2.75;}
    else if(x>=50 && x<55)
        {printf("C+");
        xp=2.50;}
    else if(x>=45 && x<50)
        {printf("C-");
        xp=2.25;}
    else if(x>=40 && x<45)
        {printf("D ");
        xp=2.00;}
    else if(x<40)
        {printf("F ");
            xp=0.00;}

    return xp;
}
