// 1. Cubes

#include <stdio.h>

void Cubes(int count, int num);

int main()
{
    int n, count;

    printf("Enter a number:\n");
    scanf("%d", &n);
    Cubes(1, n);

    return 0;
}

void Cubes(int count, int num)
{
    if (count <= num){
        printf("%d ", count * count * count);
        Cubes(count+1, num);
    }
}