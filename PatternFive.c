#include <stdio.h>

void printPattern(int n) {
    int i, j, k;
    
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (j = i; j < n; j++) {
            printf(" ");
        }
        
        // Print ascending numbers
        for (k = 1; k <= i; k++) {
            printf("%d", k);
        }
        
        // Print descending numbers
        for (k = i - 1; k >= 1; k--) {
            printf("%d", k);
        }
        
        // Move to the next line
        printf("\n");
    }
}

int main() {
    int n = 4; // Size of the pattern
    printPattern(n);
    return 0;
}
