#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);
    if(n > 0)
    {
        for(i = 1; i<=n; i++)
        sum += i;
        printf("%d\n", sum);
    }

    else if(n < 0)
    {
        for(i = 1; i >= n; i--)
        sum += i;
        printf("%d\n", sum);
    }
    else
        printf("1\n");

    return 0;
}
