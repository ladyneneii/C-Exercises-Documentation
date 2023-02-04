// Guessing

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seed, num, secret, ctr;
    
    scanf("%d", &seed);
    srand(seed);
    secret = rand() % 101 + 1;

    for (ctr = 0; ctr < 5; ctr++){
        scanf("%d", &num);
        if (num == secret){
            printf("NUMBERWANG!\n");
            exit(1);
        } else if (num > secret){
            printf("LOWER\n");
        } else {
            printf("HIGHER\n");
        }
    }
    printf("%d", secret);
    
    return 0;
}