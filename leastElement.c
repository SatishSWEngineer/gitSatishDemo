#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the integers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int minCount = INT_MAX;
    int result = INT_MAX;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if ((count < minCount) || (count == minCount && arr[i] < result)) {
            minCount = count;
            result = arr[i];
        }
    }

    printf("The integer that appears the least number of times is: %d\n", result);
    return 0;
}
