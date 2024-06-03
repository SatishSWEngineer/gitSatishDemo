#include <stdio.h>
#include <stdbool.h>

bool isWithin10(int n) {
    return (abs(n - 100) <= 10 || abs(n - 200) <= 10);
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (isWithin10(n)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
