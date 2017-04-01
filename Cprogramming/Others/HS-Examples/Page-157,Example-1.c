#include<stdio.h>
int main()
{
    int ab[5][2]={
    1, 14,
    2, 28,
    3, 19,
    4, 8,
    5, 15
    };
    int server,i;
    printf("Enter the server number : \n");
    scanf("%d",&server);
    //Look it up in the table
    for(i=0;i<5;i++)
        if(server==ab[i][0])
    {
        printf("There are %d users on server %d\n",ab[i][1],server);
        break;
    }
    //report error if not found
    if(i==5)
       printf("Server not listed.\n");
       return 0;
}
