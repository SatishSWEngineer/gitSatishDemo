#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number = 5; // Example number
    printf("Factorial of %d is %llu\n", number, factorial(number));
    return 0;
}
