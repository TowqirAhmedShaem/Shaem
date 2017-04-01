// Insertion sort
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
    {
        x = number[i];
        j = i-1;
        while(j >= 1 && number[j] > x)
        {
            number[j+1] = number[j];
            j--;
        }
        number[j+1] = x;
    }

    for(i = 1; i <= n; i++)
        printf("%d ", number[i]);
    return 0;
}
