#include<stdio.h>
int shaemC(int array[][10],int n);
int main()
{
    int shaem[1][10]={1,2,3,4,5,6,7,8,9,10};
    int paira[2][10]={1,2,3,4,5,6,7,8,9,10,
                      2,3,4,5,6,7,8,9,10,11
                    };
    int anika[3][10]={1,2,3,4,5,6,7,8,9,10,
                      2,3,4,5,6,7,8,9,10,11,
                      3,4,5,6,7,8,9,10,11,12
                        };
    printf("Shaem :\n");
    shaemC(shaem,1);
    printf("paira\n");
    shaemC(paira,2);
    printf("anika\n");
    shaemC(anika,3);
    return 0;

}
int shaemC(int array[][10],int n)
{
    int i,j;
    for(i=0;i<n;i++)
        {
            for(j=0;j<10;j++)
                printf("%d ",array[i][j]);
            printf("\n");
        }

            return 0;
}
