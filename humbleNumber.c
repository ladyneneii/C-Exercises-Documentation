// 2. Humble number

#include <stdio.h>

int main()
{
    int num, count, ctr, primeNum[100], idx, div;

    printf("Enter a number:\n");
    scanf("%d", &num);
    for (idx = 0, ctr = 11; ctr <= num; ctr++){
        for (div = 2; div < ctr && ctr % div != 0; div++){}
        if (div == ctr){
            primeNum[idx] = ctr;
            idx++;
        }
    }
    for (count = 0; count < idx && num % primeNum[count] != 0; count++){}
    if (count == idx){
        printf("Humble Number\n");
    } else {
        printf("Not Humble Number\n");
    }

    return 0;
}