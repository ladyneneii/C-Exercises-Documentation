// Decimal Parts

#include <stdio.h>

int main()
{
    unsigned int x, temp, digit, ctr, i, tempctr;

    scanf("%ld", &x);

    for (ctr = 0, temp = x; temp != 0; temp /= 10, ctr++){}

    for (; ctr > 0; ctr--){
        for (temp = x, i = 0; i < ctr; temp /= 10, i++){
            digit = temp % 10;
        }
        if (digit != 0){
            for (tempctr = ctr-1; tempctr > 0; --tempctr){
                digit *= 10;
            }
            if (ctr > 1){
                if (ctr == 2){
                    printf("%d + ", digit);
                } else {
                    printf("%d + ", digit);
                }
            } else {
                printf("%d", digit);
            }
        }
    }
    return 0;
}