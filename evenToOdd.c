#include <stdio.h>

int main() {
    int number;

    printf("Enter an even number: ");
    scanf("%d", &number);

    if (number % 2 != 0) {
        printf("The number entered is not even.\n");
        return 1; // Exit the program as the number is not even
    }

    switch (number % 2) {
        case 0:
            number += 1;
            break;
        default:
            break;
    }

    printf("The upper nearest odd number is: %d\n", number);
    return 0;
}
