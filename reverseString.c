#include <stdio.h>
#include <string.h>

void reverseSubstring(char *str, int n1, int n2) {
    while (n1 < n2) {
        char temp = str[n1];
        str[n1] = str[n2];
        str[n2] = temp;
        n1++;
        n2--;
    }
}

int main() {
    char str[100];
    int n1, n2;
    printf("Enter the string: ");
    scanf("%s", str);
    printf("Enter two integers (n1 and n2): ");
    scanf("%d %d", &n1, &n2);

    int len = strlen(str);
    if (n1 >= 0 && n2 < len && n1 <= n2) {
        reverseSubstring(str, n1, n2);
        printf("The modified string is: %s\n", str);
    } else {
        printf("Invalid indices\n");
    }

    return 0;
}
