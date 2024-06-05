#include <stdio.h>

void printPyramid(int n) {
    int i, j, space;

    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printPyramid(n);

    return 0;
}
