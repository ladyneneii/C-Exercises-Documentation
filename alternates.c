// Alternates

#include <stdio.h>

int main()
{
    int arr[5], arr2[5], idx;

    scanf("%d %d %d %d %d %d %d %d %d %d", arr, arr2, arr+1, arr2+1, arr+2, arr2+2, arr+3, arr2+3, arr+4, arr2+4);

    for (idx = 0; idx < 5; idx++){
        printf("%d ", arr[idx]);
    }
    printf("\n");
    for (idx = 0; idx < 5; idx++){
        printf("%d ", arr2[idx]);
    }

    return 0;
}