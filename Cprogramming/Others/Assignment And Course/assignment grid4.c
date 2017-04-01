#include<stdio.h>
int main()
{
    int i, j, l, m, n;
    double k[60], f;
    float a[100][6], v[60], t[60], to[60], min[60], b[100][6], g, h;
    printf("Alamgir Hossain\nLecturer\nDepartment of Applied Physics, Electronics & Communication Engineering\nUniversity of Chittagong\n\n\n");
    printf("Input 99 as ID to break\nEnter details:\nID<space>Atdnc<space>CT-1<space>CT-2<space>CT-3<space>CT-4<space>CT-5\n");
    for(i=0; i<60;i++)
    {
        scanf("%lf", &k[i]);
        if(k[i]==99)
            break;
        scanf("%f %f %f %f %f %f",&a[i][0], &a[i][1], &a[i][2], &a[i][3], &a[i][4], &a[i][5]);
                  for(l=0; l<6; l++)
                    {
                        if(a[i][l]>30)
                        h=1;
                    }
        if(h==1)
        {
            printf("ID %.lf might have invalid values, please try again\n", k[i]);
            i--;
            h=0;
        }
    }
    printf("Best number of CTs you want to count:\n");
    scanf("%d", &n);
    for(j=0; j<(i-1); j++)
    {
        if(k[j]>k[j+1])
        {
            f=k[j+1];
            k[j+1]=k[j];
            k[j]=f;
            for(l=0; l<6; l++)
            {
                g=a[j][l];
                a[j][l]=a[j+1][l];
                a[j+1][l]=g;
            }
            j=-1;
        }
    }
    printf(" _______________________________________________________________________\n");
    printf("|   ID\t   | Atd. CT-1\tCT-2\tCT-3\tCT-4\tCT-5\tAvg\tTotal   |\n");
    printf("|-----------------------------------------------------------------------|\n");
    for(j=0; j<i; j++)
    {
            t[j]=0;
            to[j]=0;
            for(l=1; l<6; l++)
                b[j][l]=a[j][l];
            for(l=1; l<6; l++)
            {
                if(b[j][l]<b[j][l+1])
                {
                    m=b[j][l+1];
                    b[j][l+1]=b[j][l];
                    b[j][l]=m;
                    l=0;
                }
                //t[j]+=a[j][l];
            }
            for(l=1; l<=n; l++)
                {
                    t[j]+=b[j][l];
                }
            v[j]=(t[j])/n;
            to[j]=v[j]+a[j][0];
                printf("| %.lf | %.f    %.f  \t %.f \t %.f  \t %.f  \t %.f  \t%.1f  \t %.1f   |\n", k[j], a[j][0], a[j][1], a[j][2], a[j][3], a[j][4], a[j][5], v[j], to[j]);
                if(j==(i-1))
                printf("|_______________________________________________________________________|\n");
                else
                    printf("|-----------------------------------------------------------------------|\n");
    }

 /*   printf("  ID\t | CT-1  CT-2  CT-3  CT-4  CT-5   Avg   Total  \n");
    printf("-----------------------------------------------------------------\n");
    for(i=0, k=15702002; i<5; i++, k++)
    {
        printf("%d |", k);
        for(j=0; j<5; j++)
            {
                printf("%f", &a[i][j]);
            }

    }*/
  system("pause");
}
