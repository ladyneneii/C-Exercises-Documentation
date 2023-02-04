// Sorting

#include <stdio.h>

int main()
{
    int a[10], x, y, small, temp;

    scanf("%d %d %d %d %d %d %d %d %d %d", a, a+1, a+2, a+3, a+4, a+5, a+6, a+7, a+8, a+9);

    for (x = 0; x < 9; x++){
        small = x;
        for (y = x+1; y < 10; y++){
            if (a[small] > a[y]){
                small = y;
            }
        }
        if (a[x] > a[small]){
            temp = a[x];
            a[x] = a[small];
            a[small] = temp;
        }
    }
    
    for (x = 0; x < 10; x++){
        printf("%d ", a[x]);
    }

    return 0;
}