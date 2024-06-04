#include <stdio.h>

int main() {
    int n = 5; // Number of rows
    
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            printf("  ");
        }
        // Print stars
        for (int k = 0; k < n - i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
