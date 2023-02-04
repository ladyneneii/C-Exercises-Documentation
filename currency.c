// Currency Conversion

#include <stdio.h>

int main()
{
    float amount, rate, result;

    scanf("%f %f", &amount, &rate);

    result = amount * rate;
    if (result < 0.1){
        result = 0.0;
    }

    printf("%.1f USD @ %.1f USDPHP is %.1f PHP", amount, rate, result);

    return 0;
}