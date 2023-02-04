// 3. Word count

#include <stdio.h>

int main()
{
    int count, idx, space;
    char str[100];

    printf("Enter string:\n");
    scanf("%100[^\n]", str);
    for (space = 1, count = idx = 0; str[idx] != '\0'; idx++){
        if (str[idx] != ' ' && space == 1){
            count++;
            space--;
        } else if (str[idx] == ' '){
            space = 1;
        }
    }
    printf("%d words", count);

    return 0;
}