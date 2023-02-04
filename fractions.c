// Subtracting fractions

#include <stdio.h>

int main()
{
    int a, b, c, d, num1, num2, den;

    scanf("%d, %d, %d, %d", &a, &b, &c, &d);

    den = b * d;
    num1 = den / b * a;
    num2 = den / d * c;
    num1 -= num2;

    printf("%d/%d", num1, den);

    return 0;
}