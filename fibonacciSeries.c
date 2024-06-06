#include <stdio.h>

void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm, i;
    
    printf("First %d terms of Fibonacci series: ", n);
    
    for (i = 1; i <= n; ++i) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    
    printf("\n");
}

int main() {
    int N = 10; // Example for first 10 terms
    printFibonacci(N);
    return 0;
}
