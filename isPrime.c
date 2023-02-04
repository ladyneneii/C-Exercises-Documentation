// isPrime

// #include <stdio.h>

// int main()
// {
//     printf("%d", isPrime(5));
//     return 0;
// }

int isPrime(int num)
{
    int ctr;

    for (ctr = 2; ctr < num && num % ctr != 0; ctr++){}

    return (ctr == num) ? 1 : 0;
}