#include<stdio.h>
int main()
{
    int ist[5]={12,50,52,52,12};
    int scnd[5]={12,6,52,56,100};
    int finl[5]={12,16,54,50,98};
    int i,marks,count;
    double total[5];
    for(i=0;i<5;i++)
    {
        total[i]=ist[i]/4.0+scnd[i]/4.0+finl[i]/2.0;
        printf("Roll no : %d\tTotal Marks : %.01lf\n",i+1,total[i]);
    }
    for(marks=50;marks<101;marks++)
    {
        count=0;
        for(i=0;i<5;i++)
        {
            if(total[i]==marks)
            {
                count++;
            }
        }
        printf("Marks : %d\tCount : %d\n",marks,count);
    }
    return 0;

}
