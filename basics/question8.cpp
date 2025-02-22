#include <iostream>

using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int year, int month) {
    if (month < 1 || month > 12) {
        return -1; // Invalid month input
    }

    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month == 2 && isLeapYear(year)) {
        return 29;
    }

    return daysInMonth[month - 1];
}

int main() {
    int year, month;
    
    cout << "Enter Year: ";
    cin >> year;
    cout << "Enter Month (1-12): ";
    cin >> month;

    int days = getDaysInMonth(year, month);
    
    if (days == -1) {
        cout << "Invalid month entered!" << endl;
    } else {
        cout << "Number of days in Year " << year << " and Month " << month << " is: " << days << endl;
    }

    return 0;
}
