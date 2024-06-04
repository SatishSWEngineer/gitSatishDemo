#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

int compareDates(Date d1, Date d2) {
    if (d1.year > d2.year) return 1;
    if (d1.year < d2.year) return -1;
    if (d1.month > d2.month) return 1;
    if (d1.month < d2.month) return -1;
    if (d1.day > d2.day) return 1;
    if (d1.day < d2.day) return -1;
    return 0;
}

int main() {
    Date date1, date2;
    
    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);
    
    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    int result = compareDates(date1, date2);

    if (result > 0) {
        printf("First date is greater.\n");
    } else if (result < 0) {
        printf("Second date is greater.\n");
    } else {
        printf("Both dates are equal.\n");
    }

    return 0;
}
