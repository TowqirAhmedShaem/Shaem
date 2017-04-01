#include<stdio.h>
int main()
{
    int answer,count;
    for(count=1;count<=11;count++)
    {
        printf("what is %d + %d : \a\n",count,count);
        scanf("%d",&answer);
        if(answer==count+count)
            printf("U are right!!!\a\n");
        else
        {
            printf("No u are wrong\a\n");
            printf("Try again\a\n");
            printf("what is %d + %d : \a\n",count,count);
            scanf("%d",&answer);
            //nested if
            if(answer==count+count)
                printf("U are right!!!\a\n");
            else
                printf("Wrong!!!\a Correct answer is : %d\n",count+count);

        }
    }
    return 0;
}
