#include <stdio.h>
int main()
{
    int i, j, space, k=0, cat, a[1000];
    scanf("%d",&cat);
    for(i=0;i<cat;i++)
        scanf("%d", &a[i]);

    for (j=0; j < cat; j++) {
        for (i=1; i <= a[j]; ++i, k=0) {
        for (space=1; space <= a[j]-i; ++space)
        {
            printf("  ");
        }

        while(k != 2*i-1)
        {
            printf("* ");
            ++k;
        }

        printf("\n");
    }
    printf("\n");
    }
    return 0;
}
