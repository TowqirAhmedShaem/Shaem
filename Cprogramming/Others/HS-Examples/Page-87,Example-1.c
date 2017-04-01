#include<stdio.h>
int main()
{
    int count,right,chances,answer;
    for(count=0;count<11;count++)
    {
        printf("What is the answer of %d + %d :\n",count,count);
        scanf("%d",&answer);
        if(answer==count + count)
            printf("Right!!\n");
        else
        {
            printf("Sorry u are wrong!! and Try again\a\n");
            right=0;
            for(chances=0;chances<3 && !right;chances++)
            {
                printf("What is the answer of %d + %d :\n",count,count);
                scanf("%d",&answer);
                if(answer==count + count)
                   {
                       printf("Right!!\n");
                       right=1;
                   }
            }
                if(!right)
                    printf("The answer is %d\n",count+count);
        }
    }
    return 0;
}
