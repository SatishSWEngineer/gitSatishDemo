#include <stdio.h>

void printPattern05(int n) {
    int i, j;
    
    // Print the first half of the pattern
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    // Print the second half of the pattern
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n = 5; // Size of the pattern
    printPattern05(n);
    return 0;
}
