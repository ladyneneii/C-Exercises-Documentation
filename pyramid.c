// Pyramid

#include <stdio.h>

int main()
{
    int n, space, i, star, j;

    scanf("%d", &n);
    for (star = 1, space = n - 1, i = 0; i < n; i++, space--, star += 2){
        for (j = 0; j < space; j++){
            printf(" ");
        }
        for (j = 0; j < star; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}