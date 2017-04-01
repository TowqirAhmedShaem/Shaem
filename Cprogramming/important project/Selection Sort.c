// Selection sort
#include <stdio.h>
int main()
{
    int number[10];
    int i, j, x, n;
    printf("How much numbers : ");
    scanf("%d", &n);
    printf("Type the number one by one :\n");
    for(i = 1; i <= n; i++)
        scanf("%d", &number[i]);

    for(i = 1; i <= n; i++)
        for(j = i+1; j <= n; j++)
    {
        if(number[i] > number[j]) {
            x = number[i];
            number[i] = number[j];
            number[j] = x;
        }
    }

    for(i = 1; i <= n; i++)
        printf("%d ", number[i]);
    return 0;
}

