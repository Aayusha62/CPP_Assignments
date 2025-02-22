#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to calculate the total number of days from year 0 to a given date
int countDays(int year, int month, int day) {
    int totalDays = 0;

    // Count days in previous full years
    for (int y = 0; y < year; y++) {
        totalDays += isLeapYear(y) ? 366 : 365;
    }

    // Array of days in each month (Non-leap year)
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Adjust for leap year
    if (isLeapYear(year)) {
        daysInMonth[1] = 29; // February has 29 days in a leap year
    }

    // Count days in previous full months of the current year
    for (int m = 0; m < month - 1; m++) {
        totalDays += daysInMonth[m];
    }

    // Add days in the current month
    totalDays += day;

    return totalDays;
}

int main() {
    int y1, m1, d1, y2, m2, d2;

    // Input two dates
    cout << "Enter first date (YYYY MM DD): ";
    cin >> y1 >> m1 >> d1;
    cout << "Enter second date (YYYY MM DD): ";
    cin >> y2 >> m2 >> d2;

    // Convert both dates to total days since year 0
    int days1 = countDays(y1, m1, d1);
    int days2 = countDays(y2, m2, d2);

    // Calculate absolute difference
    int diff = abs(days1 - days2);

    // Output the result
    cout << "Days between " << y1 << "/" << m1 << "/" << d1 
         << " to " << y2 << "/" << m2 << "/" << d2 << " = " << diff << " days" << endl;

    return 0;
}
