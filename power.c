// Power

#include <stdio.h>
#define undefined -999999999

int main()
{
    int x, y, result, ctr, neg = 0;

    scanf("%d %d", &x, &y);

    if (y == 0){
        result = 1;
    } else if (x == 0 && y < 0){
        result = undefined;
    } else {
        if (y < 0){
            y *= -1;
            neg = 1;
        }
        for (result = 1, ctr = 0; ctr < y; ctr++){
            result *= x;
        }
    }
    if (neg == 1){
         printf("1/");
    }
    if (result == undefined){
        printf("undefined");
    } else {
        printf("%d", result);
    }

    return 0;
}