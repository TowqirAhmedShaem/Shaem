#include <stdio.h>
int main() {
    int i,j,a[100],b[100],k,n,t;
    scanf("%d", &n);
    for (i=0;i<n;i++) {
        scanf("%d %d", &a[i], &b[i]);
    }
    for (i=0; i<n;i++) {
        if (a[i]>b[i]) {
            t = a[i];;
            a[i] = b[i];
            b[i] = t;
        }
        for(j=a[i];j<=b[i];j++) {
            if (j%2 == 0) {
                printf("%d",j);
                if(j!=b[i]) {
                    printf(" "); //***this is done for not to give space after last number
                }
            }
        }
            printf("\n");
    }

}
