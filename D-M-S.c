#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Function to count the number of leap years till a given year
int countLeapYears(int year, int month) {
    if (month <= 2) {
        year--;
    }
    return year / 4 - year / 100 + year / 400;
}

// Function to convert a date to days since 01-01-0000
int dateToDays(int d, int m, int y) {
    int monthDays[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // Count total days before given date
    int days = y * 365 + d;
    
    // Add days for months in given year
    for (int i = 1; i < m; i++) {
        days += monthDays[i];
    }
    
    // Add leap year days
    days += countLeapYears(y, m);
    
    return days;
}

int main() {
    int d1, m1, y1, d2, m2, y2;
    
    // Input start date
    printf("Enter start date (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &d1, &m1, &y1);
    
    // Input end date
    printf("Enter end date (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &d2, &m2, &y2);
    
    // Convert dates to days since 01-01-0000
    int days1 = dateToDays(d1, m1, y1);
    int days2 = dateToDays(d2, m2, y2);
    
    // Calculate the difference
    int difference = abs(days2 - days1);
    
    // Display result
    printf("Number of days between %02d-%02d-%04d and %02d-%02d-%04d is %d days.\n", 
           d1, m1, y1, d2, m2, y2, difference);
    
    return 0;
}
