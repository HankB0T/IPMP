#include <stdio.h>

int main()
{
    int i, j, k, n;
    scanf("%d", &n);

//Upper Triangle
    for(i=1; i<=n; i++) {
        for(j=i; j<=n-1; j++) {
            printf(" ");
        }
        for(k=1; k<=2*i-1; k++) {
            printf("*");
        }
        printf("\n");
    }

//Lower Triangle
    for(i=1; i<=n-1; i++) {
        for(j=n+i; j>n; j--) {
            printf(" ");
        }
        for(k=2*n; k>2*i+1; k--) {
            printf("*");
        }
        printf("\n");
    }
}