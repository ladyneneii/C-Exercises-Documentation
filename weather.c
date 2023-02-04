// Rain Warnings

#include <stdio.h>

int main()
{
    float measurement;

    scanf("%f", &measurement);

    if (measurement <= 2.5){
        printf("%.1f mm of rainfall is considered light. No warning would be issued.", measurement); 
    } else if (measurement <= 7.5){
        printf("%.1f mm of rainfall is considered moderate. No warning would be issued.", measurement); 
    } else if (measurement <= 15){
        printf("%.1f mm of rainfall is considered heavy. Yellow warning would be issued.", measurement);
    } else if (measurement <= 30){
        printf("%.1f mm of rainfall is considered intense. Orange warning would be issued.", measurement);
    } else {
        printf("%.1f mm of rainfall is considered torrential. Red warning would be issued.", measurement);
    }

    return 0;
}