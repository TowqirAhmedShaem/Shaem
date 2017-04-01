#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    int i,j,k,l,m;
    char ch,rc,r,z,mode;

    char f1[3][3]={'1','2','3','4','5','6','7','8','9'};
    printf("                           Tic Toe (-_-)\n                         -----------------\n");
    printf(" --------------------------------------------------------------\n");
    printf("| All Rights Reserved By Towqir Ahmed Shaem @ 2016-Vercion-1.1 |\n");
    printf(" --------------------------------------------------------------\n");
    printf("Press 'SPACE' For Silent Mode Or Press 'G' For General Mode\n");
    mode=getche();
    printf("\n");
    if(mode==' ')
    {
    k:
    printf("Press Enter To Play This Game..\n");
    scanf("%c",&ch);
    if(ch=='\n')
    {

    printf("\nNew Game ...\n");
    printf("1st Man Is Indicated By -'0' And Computer Is Indicated By -'X'\n\n\n");
    printf(" 1 | 2 | 3 \n---|---|---\n 4 | 5 | 6 \n---|---|---\n 7 | 8 | 9 \n\n");
    for(i=0;i<5;i++)
    {

        // 1st Man Input
        printf("1st Man : ");
        shaem:
        r=getche();

        if(r=='1')
        {
            f1[0][0]='0';
        }
        if(r=='2')
        {
            f1[0][1]='0';
        }
        if(r=='3')
        {
            f1[0][2]='0';
        }
        if(r=='4')
        {
            f1[1][0]='0';
        }
        if(r=='5')
        {
            f1[1][1]='0';
        }
        if(r=='6')
        {
            f1[1][2]='0';
        }
        if(r=='7')
        {
            f1[2][0]='0';
        }
        if(r=='8')
        {
            f1[2][1]='0';
        }
        if(r=='9')
        {
            f1[2][2]='0';
        }
        // Print Out Diagram

        printf("\n %c | %c | %c \n---|---|---\n %c | %c | %c \n---|---|---\n %c | %c | %c \n\n",f1[0][0],f1[0][1],f1[0][2],f1[1][0],f1[1][1],f1[1][2],f1[2][0],f1[2][1],f1[2][2]);

        //Checking Firct One

        if(f1[0][0]=='0' && f1[0][0]==f1[0][1] && f1[0][0]==f1[0][2])
            { printf("First Man Wins\nGame Over\n\n");  }
        else if(f1[0][0]=='0' && f1[0][0]==f1[1][0] && f1[0][0]==f1[2][0])
            { printf("First Man Wins\nGame Over\n\n");  }
        else if(f1[2][0]=='0' && f1[2][0]==f1[2][1] && f1[2][0]==f1[2][2])
            { printf("First Man Wins\nGame Over\n\n");  }
        else if(f1[0][2]=='0' && f1[0][2]==f1[1][2] && f1[0][2]==f1[2][2])
            { printf("First Man Wins\nGame Over\n\n");  }
        else if(f1[0][1]=='0' && f1[0][1]==f1[1][1] && f1[0][1]==f1[2][1])
            { printf("First Man Wins\nGame Over\n\n");  }
        else if(f1[0][0]=='0' && f1[0][0]==f1[1][1] && f1[0][0]==f1[2][2])
            { printf("First Man Wins\nGame Over\n\n");  }
        else if(f1[0][2]=='0' && f1[0][2]==f1[1][1] && f1[0][2]==f1[2][0])
            { printf("First Man Wins\nGame Over\n\n");  }
        else if(f1[1][0]=='0' && f1[1][0]==f1[1][1] && f1[1][0]==f1[1][2])
            { printf("First Man Wins\nGame Over\n\n");  }

        // Second Man Input
        printf("Second Man : ");
        //rc=getche();

        for(l=0;l<3;l++)
        {
            for(m=0;m<3;m++)
                if(f1[l][m]!='0' && f1[l][m]!='x') break;
            if(f1[l][m]!='0' && f1[l][m]!='x') break;
        }


            f1[l][m] = 'x';


        // Print Out Diagram For Second Man

        printf("\n %c | %c | %c \n---|---|---\n %c | %c | %c \n---|---|---\n %c | %c | %c \n\n",f1[0][0],f1[0][1],f1[0][2],f1[1][0],f1[1][1],f1[1][2],f1[2][0],f1[2][1],f1[2][2]);

        // Second Man Checking
        if(f1[0][0]=='x' && f1[0][0]==f1[0][1] && f1[0][0]==f1[0][2])
            { printf("Second Man Wins\a\nGame Over\n\n");  }
        else if(f1[0][0]=='x' && f1[0][0]==f1[1][0] && f1[0][0]==f1[2][0])
            { printf("Second Man Wins\a\nGame Over\n\n");  }
        else if(f1[2][0]=='x' && f1[2][0]==f1[2][1] && f1[2][0]==f1[2][2])
            { printf("Second Man Wins\a\nGame Over\n\n");  }
        else if(f1[0][2]=='x' && f1[0][2]==f1[1][2] && f1[0][2]==f1[2][2])
            { printf("Second Man Wins\a\nGame Over\n\n");  }
        else if(f1[0][1]=='x' && f1[0][1]==f1[1][1] && f1[0][1]==f1[2][1])
            { printf("Second Man Wins\a\nGame Over\n\n");  }
        else if(f1[0][0]=='x' && f1[0][0]==f1[1][1] && f1[0][0]==f1[2][2])
            { printf("Second Man Wins\a\nGame Over\n\n");  }
        else if(f1[0][2]=='x' && f1[0][2]==f1[1][1] && f1[0][2]==f1[2][0])
            { printf("Second Man Wins\a\nGame Over\n\n");  }
        else if(f1[1][0]=='x' && f1[1][0]==f1[1][1] && f1[1][0]==f1[1][2])
            { printf("Second Man Wins\a\nGame Over\n\n");  }
    }
    printf("Game Draw\a\n\n");

    }
    }

    /*
    // General Mode
    else if(mode=='g')
    {
            h:
    printf("Press Enter To Play This Game..\n");
    scanf("%c",&ch);
    if(ch=='\n')
    {

    printf("\n\aNew Game ...\n");
    printf("First Man Is Indicated By -'0' And 2nd Man Is Indicated By -'X'\a\n\n\n");
    printf(" 1 | 2 | 3 \n---|---|---\n 4 | 5 | 6 \n---|---|---\a\n 7 | 8 | 9 \n\n");
    for(i=0;i<9;i++)
    {

        // 1st Man Input
        printf("1st Man : ");
        r=getche();
        printf("\a");
        if(r=='1')
        {
            f1[0][0]='0';
        }
        if(r=='2')
        {
            f1[0][1]='0';
        }
        if(r=='3')
        {
            f1[0][2]='0';
        }
        if(r=='4')
        {
            f1[1][0]='0';
        }
        if(r=='5')
        {
            f1[1][1]='0';
        }
        if(r=='6')
        {
            f1[1][2]='0';
        }
        if(r=='7')
        {
            f1[2][0]='0';
        }
        if(r=='8')
        {
            f1[2][1]='0';
        }
        if(r=='9')
        {
            f1[2][2]='0';
        }
        // Print Out Diagram

        printf("\n %c | %c | %c \n---|---|---\n %c | %c | %c \n---|---|---\n %c | %c | %c \a\n\n",f1[0][0],f1[0][1],f1[0][2],f1[1][0],f1[1][1],f1[1][2],f1[2][0],f1[2][1],f1[2][2]);

        //Checking Firct One

        if(f1[0][0]=='0' && f1[0][0]==f1[0][1] && f1[0][0]==f1[0][2])
            { printf("First Man Winsa\a\nGame Over\a\n\n"); goto h;}
        else if(f1[0][0]=='0' && f1[0][0]==f1[1][0] && f1[0][0]==f1[2][0])
            { printf("First Man Wins\a\nGame Over\a\n\n"); goto h;}
        else if(f1[2][0]=='0' && f1[2][0]==f1[2][1] && f1[2][0]==f1[2][2])
            { printf("First Man Wins\a\nGame Over\a\n\n"); goto h;}
        else if(f1[0][2]=='0' && f1[0][2]==f1[1][2] && f1[0][2]==f1[2][2])
            { printf("First Man Wins\a\nGame Over\a\n\n"); goto h;}
        else if(f1[0][1]=='0' && f1[0][1]==f1[1][1] && f1[0][1]==f1[2][1])
            { printf("First Man Wins\a\nGame Over\a\n\n"); goto h;}
        else if(f1[0][0]=='0' && f1[0][0]==f1[1][1] && f1[0][0]==f1[2][2])
            { printf("First Man Wins\a\nGame Over\a\n\n"); goto h;}
        else if(f1[0][2]=='0' && f1[0][2]==f1[1][1] && f1[0][2]==f1[2][0])
            { printf("First Man Wins\a\nGame Over\a\n\n"); goto h;}
        else if(f1[1][0]=='0' && f1[1][0]==f1[1][1] && f1[1][0]==f1[1][2])
            { printf("First Man Wins\a\nGame Over\n\n"); goto h;}

        // Second Man Input
        printf("Second Man : ");
        rc=getche();
        printf("\a");
        if(rc=='1')
        {
            f1[0][0]='x';
        }
        if(rc=='2')
        {
            f1[0][1]='x';
        }
        if(rc=='3')
        {
            f1[0][2]='x';
        }
        if(rc=='4')
        {
            f1[1][0]='x';
        }
        if(rc=='5')
        {
            f1[1][1]='x';
        }
        if(rc=='6')
        {
            f1[1][2]='x';
        }
        if(rc=='7')
        {
            f1[2][0]='x';
        }
        if(rc=='8')
        {
            f1[2][1]='x';
        }
        if(rc=='9')
        {
            f1[2][2]='x';
        }
        // Print Out Diagram For Second Man

        printf("\n %c | %c | %c \n---|---|---\n %c | %c | %c \n---|---|---\n %c | %c | %c \n\a\n",f1[0][0],f1[0][1],f1[0][2],f1[1][0],f1[1][1],f1[1][2],f1[2][0],f1[2][1],f1[2][2]);

        // Second Man Checking
        if(f1[0][0]=='x' && f1[0][0]==f1[0][1] && f1[0][0]==f1[0][2])
            { printf("Second Man Wins\a\nGame Over\a\n\n"); goto h;}
        else if(f1[0][0]=='x' && f1[0][0]==f1[1][0] && f1[0][0]==f1[2][0])
            { printf("Second Man Wins\a\nGame Over\a\n\n"); goto h;}
        else if(f1[2][0]=='x' && f1[2][0]==f1[2][1] && f1[2][0]==f1[2][2])
            { printf("Second Man Wins\a\nGame Over\a\n\n"); goto h;}
        else if(f1[0][2]=='x' && f1[0][2]==f1[1][2] && f1[0][2]==f1[2][2])
            { printf("Second Man Wins\a\nGame Over\a\n\n"); goto h;}
        else if(f1[0][1]=='x' && f1[0][1]==f1[1][1] && f1[0][1]==f1[2][1])
            { printf("Second Man Wins\a\nGame Over\a\n\n"); goto h;}
        else if(f1[0][0]=='x' && f1[0][0]==f1[1][1] && f1[0][0]==f1[2][2])
            { printf("Second Man Wins\a\nGame Over\a\n\n"); goto h;}
        else if(f1[0][2]=='x' && f1[0][2]==f1[1][1] && f1[0][2]==f1[2][0])
            { printf("Second Man Wins\a\nGame Over\a\n\n"); goto h;}
        else if(f1[1][0]=='x' && f1[1][0]==f1[1][1] && f1[1][0]==f1[1][2])
            { printf("Second Man Wins\a\nGame Over\a\n\n"); goto h;}
    }
    printf("Game Draw\a\n\n");
    goto h;
    }
    }*/

}
