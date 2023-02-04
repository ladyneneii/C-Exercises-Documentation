// 4. Happy number

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, sum, count, newNum, temp;

    while (1){
        printf("Enter a number:\n");
        scanf("%d", &num);
        if (num == 0){
            exit(1);
        } else if (num > 0 && num <= 100){
            break;
        }
    }

    temp = num;
    for (sum = count = 0; count < 11 && sum != 1; num = sum, count++){
        for (sum = 0; num != 0; num /= 10){
            sum += (num % 10) * (num % 10);
        }
    }
    if (count == 11){
        printf("%d is not a happy number.", temp);
    } else {
        printf("%d is a happy number.", temp);
    }

    return 0;
}