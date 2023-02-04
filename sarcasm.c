// Sarcasm

#include <stdio.h>

int main()
{
    char str[70];
    int idx;

    scanf("%69[^\n]", str);
    for (idx = 0; str[idx] != '\0'; idx++){
        if (idx % 2 == 0){
            if (str[idx] >= 65 && str[idx] <= 90){
                str[idx] += 32;
            }
        } else {
            if (str[idx] >= 97 && str[idx] <= 122){
                str[idx] -= 32;
            }
        }
    }

    printf("%s", str);
}