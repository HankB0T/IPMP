#include <stdio.h>

int main()
{
    int arr[50], n, max;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (int i=0; i<n; i++) {
        if(arr[i]>=max) max = arr[i];
    }
    printf("%d", max);
}