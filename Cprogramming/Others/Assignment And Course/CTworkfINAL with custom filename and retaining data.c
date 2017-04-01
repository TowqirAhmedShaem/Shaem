#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//adds the headers: standard I/O, standard library, string
int main()
{
    FILE* pfilehandle;
    //opens a file pointer called pfliehandle
    char Filename[1000];
        //creating a character array to use as a filename
    printf("type in your desired file's name (with extension): ");
    gets(Filename);
    pfilehandle = fopen(Filename, "a");
    //opens a file with the name from Filename, if it is non-existent, it is created, if it is existed, data is overwritten
    int i, j, l, m, n, c, o;
    //declaration of variables
    char d[20];
    char z[20];
    //character arrays for holding course name & teachers short name
    char e[][2][200]=
    {
        "AH", "\n\nAlamgir Hossain\nLecturer\nDepartment of Applied Physics, Electronics & Communication Engineering\nUniversity of Chittagong\n\n\n",
        "SC", "\n\nSabuj Chowdhury\nLecturer\nDepartment of Applied Physics, Electronics & Communication Engineering\nUniversity of Chittagong\n\n\n",
        "MDA", "\n\nMd. Didarul Alam\nAssistant Professor\nDepartment of Applied Physics, Electronics & Communication Engineering\nUniversity of Chittagong\n\n\n",
        "SA", "\n\nSabrina Alam\nAssistant Professor\nDepartment of Applied Physics, Electronics & Communication Engineering\nUniversity of Chittagong\n\n\n",
        "HKR", "\n\nHasan Khaled Rouf\nAssistant Professor\nDepartment of Applied Physics, Electronics & Communication Engineering\nUniversity of Chittagong\n\n\n",
        "SKK", "\n\nSaumitra Kumar Kuri\nLecturer\nDepartment of Applied Physics, Electronics & Communication Engineering\nUniversity of Chittagong\n\n\n",
        "JUA", "\n\nJamal Uddin Ahmed\nAssistant Professor\nDepartment of Applied Physics, Electronics & Communication Engineering\nUniversity of Chittagong\n\n\n",
        "MS", "\n\nMohammad Shuhrawardy\nAssistant Professor\nDepartment of Applied Physics, Electronics & Communication Engineering\nUniversity of Chittagong\n\n\n",
        "AI", "\n\nAriful Islam\nAssistant Professor\nDepartment of Applied Physics, Electronics & Communication Engineering\nUniversity of Chittagong\n\n\n",
        "AZC", "\n\nAbu Zahed Chowdhury\nAssistant Professor\nDepartment of Applied Physics, Electronics & Communication Engineering\nUniversity of Chittagong\n\n\n",
        "SAR", "\n\nShah Alamgir Ronju\nAssistant Professor\nDepartment of Applied Physics, Electronics & Communication Engineering\nUniversity of Chittagong\n\n\n",
    };
    //multi-dimensional array for holding the teachers info for crosschecking & returning, 2 columns
    double k[60], f;
    //declaration of variables(k array holds the ID numbers)
    float a[100][6], v[60], t[60], to[60], min[60], b[100][6], g, h;
    /*a is a two dimensional array, for holding the CT and Attendance marks matrix for all students,
    each of it's row consists of a set of numbers for each students, v array is used hold the avg of each student
    t array holds the total CT marks of each student, to[] array holds the attendance+ct avg
    b matrix holds data after it sorted by ID*/
    fprintf(pfilehandle, "Appropriate Font:\tCourier New\nSize:\t10");
    //format prints a string to pfilehandle, in turn writing it to APECE.doc
    printf( "Enter Teacher's short-name(all capital letters): ");
    gets(z);
    //gets the teachers short-name
    printf( "Enter Course name and code: ");
    gets(d);
    //gets the course name and code
    again:
        //acts as a marker
    printf( "Number of CTs: ");
    scanf("%d", &o);
    if(o>5)
    {
        printf("We currently don't support CTs>5, sorry. Input again");
        goto again;
    }
    //gets the number of CTs, if >5, gets it again
    printf( "\nInput 99 as ID to break\n");
    //To stop the input simply input 99 as a students ID
    switch(o)
    /*This is what makes the program as big as an oxford dictionary, unfortunately this is a crucial element
    which decides whether to print table for 2,3,4 or 5 CTs, depending on your input*/
    {
case 5:

    {
           for(i=0; i<60;i++)
            {
        printf( "ID: ");
        scanf("%lf", &k[i]);
        //gets ID
        if(k[i]==99)
            break;
        //The 99 to break function
        printf( "Attendance: ");
        scanf("%f", &a[i][0]);
        //gets attendance
        for(l=1; l<6; l++)
                    {
                        printf( "CT-%d: ", l);
                        scanf("%f", &a[i][l]);
                        //gets CT marks one by one
                        if(a[i][l]>30)
                        {
                            printf( "CT-%d might have invalid values, please try again\n", l);
                            l--;
                        }
                        //this interesting function checks whether entered value is invalid, if so, gets it again,
                        //by keeping the count same through decrease and increase
                    }
    }
    printf( "Best number of CTs you want to count:\n");
    scanf("%d", &n);
    //the printf says it all
    for(j=0; j<(i-1); j++)
    {
        if(k[j]>k[j+1])
        {
            f=k[j+1];
            k[j+1]=k[j];
            k[j]=f;
            //sorts the IDs from largest to smallest
            for(l=0; l<6; l++)
            {
                g=a[j][l];
                a[j][l]=a[j+1][l];
                a[j+1][l]=g;
                //for each change in ID position, changes the Marks positions accordingly,(the whole set)
            }
            j=-1;
            //starts checking from beginning
        }
    }

    fprintf(pfilehandle, "\n          Applied Physics,Electronics and Communication Engineering\n");
    fprintf(pfilehandle, "                          University of Chittagong\n");
    fprintf(pfilehandle, "\n                         Course: %s\n\n", d);
    fprintf(pfilehandle, "  -------------------------------------------------------------------------\n");

    fprintf(pfilehandle, " |Serial|   ID     | Atd | CT-1 | CT-2 | CT-3 | CT-4 | CT-5 | Avg  | Total |\n");
    //fprintf(pfilehandle, " |      |          |     |      |      |      |      |      |      |       |\n");
    fprintf(pfilehandle, "  -------------------------------------------------------------------------\n");
    //outputs to doc



    for(j=0; j<i; j++)
    {
            t[j]=0;
            to[j]=0;
            for(l=1; l<6; l++)
                b[j][l]=a[j][l];
                //copies data into another array for checking
            for(l=1; l<6; l++)
            {
                if(b[j][l]<b[j][l+1])
                {
                    m=b[j][l+1];
                    b[j][l+1]=b[j][l];
                    b[j][l]=m;
                    l=0;
                }
                //sorts largest to smallest
                //t[j]+=a[j][l];
            }
            for(l=1; l<=n; l++)
                {
                    t[j]+=b[j][l];
                }
            //sums the chosen best numbers
            v[j]=(t[j])/n;
            //avg
            to[j]=v[j]+a[j][0];
            //totals

                fprintf(pfilehandle, " | %2d   | %8.lf | %4.1f| %5.2f| %5.2f| %5.2f| %5.2f| %5.2f| %5.2f| %5.2f |\n",j+1,k[j], a[j][0], a[j][1], a[j][2], a[j][3], a[j][4], a[j][5], v[j], to[j]);
                fprintf(pfilehandle, "  -------------------------------------------------------------------------\n");
                //outputs to file
    }
    break;
    }
case 4: //comments same as case 5
        {
           for(i=0; i<60;i++)
            {
        printf( "ID: ");
        scanf("%lf", &k[i]);
        if(k[i]==99)
            break;
        printf( "Attendance: ");
        scanf("%f", &a[i][0]);
        for(l=1; l<5; l++)
                    {
                        printf( "CT-%d: ", l);
                        scanf("%f", &a[i][l]);
                        if(a[i][l]>30)
                        {
                            printf( "CT-%d might have invalid values, please try again\n", l);
                            l--;
                        }
                    }
    }
    printf( "Best number of CTs you want to count:\n");
    scanf("%d", &n);
    for(j=0; j<(i-1); j++)
    {
        if(k[j]>k[j+1])
        {
            f=k[j+1];
            k[j+1]=k[j];
            k[j]=f;
            for(l=0; l<5; l++)
            {
                g=a[j][l];
                a[j][l]=a[j+1][l];
                a[j+1][l]=g;
            }
            j=-1;
        }
    }

    fprintf(pfilehandle, "\n        Applied Physics,Electronics and Communication Engineering\n");
    fprintf(pfilehandle, "                        University of Chittagong\n");
    fprintf(pfilehandle, "\n                       Course: %s\n\n", d);
    fprintf(pfilehandle, "    ------------------------------------------------------------------\n");
   // fprintf(pfilehandle, "   |      |          |     |      |      |      |      |      |       |\n");
    fprintf(pfilehandle, "   |Serial|   ID     | Atd | CT-1 | CT-2 | CT-3 | CT-4 | Avg  | Total |\n");
   // fprintf(pfilehandle, "   |      |          |     |      |      |      |      |      |       |\n");
    fprintf(pfilehandle, "    ------------------------------------------------------------------\n");

    for(j=0; j<i; j++)
    {
            t[j]=0;
            to[j]=0;
            for(l=1; l<5; l++)
                b[j][l]=a[j][l];
            for(l=1; l<5; l++)
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

       //             fprintf(pfilehandle, "   |      |          |     |      |      |      |      |      |       |\n");
                    fprintf(pfilehandle, "   | %2d   | %8.lf | %4.1f| %5.2f| %5.2f| %5.2f| %5.2f| %5.2f| %5.2f |\n",j+1, k[j], a[j][0], a[j][1], a[j][2], a[j][3], a[j][4], v[j], to[j]);
                    fprintf(pfilehandle, "    ------------------------------------------------------------------\n");

    }
    break;
    }
case 3:
        {
            for(i=0; i<60;i++)
            {
        printf("ID: ");
        scanf("%lf", &k[i]);
        if(k[i]==99)
            break;
        printf( "Attendance: ");
        scanf("%f", &a[i][0]);
        for(l=1; l<4; l++)
                    {
                        printf( "CT-%d: ", l);
                        scanf("%f", &a[i][l]);
                        if(a[i][l]>30)
                        {
                            printf( "CT-%d might have invalid values, please try again\n", l);
                            l--;
                        }
                    }
    }
    printf( "Best number of CTs you want to count:\n");
    scanf("%d", &n);
    for(j=0; j<(i-1); j++)
    {
        if(k[j]>k[j+1])
        {
            f=k[j+1];
            k[j+1]=k[j];
            k[j]=f;
            for(l=0; l<4; l++)
            {
                g=a[j][l];
                a[j][l]=a[j+1][l];
                a[j+1][l]=g;
            }
            j=-1;
        }
    }

    fprintf(pfilehandle, "\n      Applied Physics,Electronics and Communication Engineering\n");
    fprintf(pfilehandle, "                      University of Chittagong\n");
    fprintf(pfilehandle, "\n                        Course: %s\n\n", d);
    fprintf(pfilehandle, "      -----------------------------------------------------------\n");
    //fprintf(pfilehandle, "     |      |          |     |      |      |      |      |       |\n");
    fprintf(pfilehandle, "     |Serial|   ID     | Atd | CT-1 | CT-2 | CT-3 | Avg  | Total |\n");
    //fprintf(pfilehandle, "     |      |          |     |      |      |      |      |       |\n");
    fprintf(pfilehandle, "      -----------------------------------------------------------\n");

    for(j=0; j<i; j++)
    {
            t[j]=0;
            to[j]=0;
            for(l=1; l<4; l++)
                b[j][l]=a[j][l];
            for(l=1; l<4; l++)
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

             //   fprintf(pfilehandle, "     |      |          |     |      |      |      |      |       |\n");
                fprintf(pfilehandle, "     | %2d   | %8.lf | %4.1f| %5.2f| %5.2f| %5.2f| %5.2f| %5.2f |\n",j+1,k[j], a[j][0], a[j][1], a[j][2], a[j][3], v[j], to[j]);
                fprintf(pfilehandle, "      -----------------------------------------------------------\n");

    }
    break;
    }
case 2:
        {
                      for(i=0; i<60;i++)
            {
        printf( "ID: ");
        scanf("%lf", &k[i]);
        if(k[i]==99)
            break;
        printf( "Attendance: ");
        scanf("%f", &a[i][0]);
        for(l=1; l<3; l++)
                    {
                        printf( "CT-%d: ", l);
                        scanf("%f", &a[i][l]);
                        if(a[i][l]>30)
                        {
                            printf( "CT-%d might have invalid values, please try again\n", l);
                            l--;
                        }
                    }
    }
    printf( "Best number of CTs you want to count:\n");
    scanf("%d", &n);
    for(j=0; j<(i-1); j++)
    {
        if(k[j]>k[j+1])
        {
            f=k[j+1];
            k[j+1]=k[j];
            k[j]=f;
            for(l=0; l<3; l++)
            {
                g=a[j][l];
                a[j][l]=a[j+1][l];
                a[j+1][l]=g;
            }
            j=-1;
        }
    }
    fprintf(pfilehandle, "\n    Applied Physics,Electronics and Communication Engineering\n");
    fprintf(pfilehandle, "                    University of Chittagong\n");
    fprintf(pfilehandle, "\n                     Course: %s\n\n", d);
    fprintf(pfilehandle, "       ----------------------------------------------------\n");
    //fprintf(pfilehandle, "      |      |          |     |      |      |      |       |\n");
    fprintf(pfilehandle, "      |Serial|   ID     | Atd | CT-1 | CT-2 | Avg  | Total |\n");
    //fprintf(pfilehandle, "      |      |          |     |      |      |      |       |\n");
    fprintf(pfilehandle, "       ----------------------------------------------------\n");

    for(j=0; j<i; j++)
    {
            t[j]=0;
            to[j]=0;
            for(l=1; l<3; l++)
                b[j][l]=a[j][l];
            for(l=1; l<3; l++)
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

            //    fprintf(pfilehandle, "      |      |          |     |      |      |      |       |\n");
                fprintf(pfilehandle, "      | %2d   | %8.lf | %4.1f| %5.2f| %5.2f| %5.2f| %5.2f |\n",j+1,k[j], a[j][0], a[j][1], a[j][2], v[j], to[j]);
                fprintf(pfilehandle, "       ----------------------------------------------------\n");

    }
    break;
    }
    }


    for(i=0;i<10;i++)
    {
        if(!strcmp(z, e[i][0]))
        {
            fprintf(pfilehandle, "%s", e[i][1]);
            //crosschecks shrotnames for full Teacher data, and prints
            printf("\n");
            break;
        }
    }
    fprintf(pfilehandle, "\n\nCreated By:\n\tTowqir Ahmed Shaem\n\tAbdullah Zowad Khan\n\tMd. Abdul Kaium Khan\n\n\n");
    //us :P
  system("pause");
  int iReturn=0;
    iReturn = fclose(pfilehandle);
  if(iReturn==EOF)
    printf("error closing the file");
    //closing the file
  return 0;
}
