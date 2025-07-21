#include <stdio.h>

void main() {
    int year, month, sun, count = 0;
    printf("Enter the year, month, and first Sunday date: ");
    scanf("%d%d%d", &year, &month, &sun);

    int day = 31; // default max days

    // Set correct days for each month
    if (month == 2) {
        // Check for leap year
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            day = 29;
        else
            day = 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        day = 30;
    } else {
        day = 31;
    }

    // Count Sundays
    for (int sum = sun; sum <= day; sum += 7) {
        count++;
    }

    printf("Total Sundays in month %d of year %d: %d\n", month, year, count);
}
