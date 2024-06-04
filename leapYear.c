#include <stdio.h>

int main() {
    int year, isLeap = 0;

    printf("Enter a year: ");
    scanf("%d", &year);

    switch (year % 4) {
        case 0:
           
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    isLeap = 1;
                }
            } else {
                isLeap = 1;
            }
            break;
    }

    switch (isLeap) {
        case 1:
            printf("%d is a leap year.\n", year);
            break;
        default:
            printf("%d is not a leap year.\n", year);
    }

    return 0;
}
