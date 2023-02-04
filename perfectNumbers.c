// Perfect Numbers

#include <stdio.h>

int main()
{
    int n, x, y, sum;

    scanf("%d", &n);
    for(x = 6; n > 0; x++){
        for (sum = 0, y = 2; y < x; y++){
            if (x % y == 0){
                sum += y;
            }
        }
        if (++sum == x){
            n--;
            printf("%d ", x);
        }
    }

    return 0;
}