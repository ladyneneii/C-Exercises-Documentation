// decToOctal

#include <stdio.h>

void decToOctal(int num)
{
    if (num != 0){
        decToOctal(num/8);
        printf("%d", num%8);
    }
}

int main()
{
    decToOctal(124);

    return 0;
}
