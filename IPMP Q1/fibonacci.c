#include <stdio.h>

int main() 
{
    int a, b, sum[100];
    int i, j, n;
    a=0; b=1;
    for(i=2; i<=94; i++) {
        sum[i] = b + a;
        a = b;
        b = sum[i];
    }
    sum[0]=0; sum[1]=1;
    scanf("%d", &n);
    printf("\n%d", sum[n-1]);
    return 0;
}