#include <iostream>
using namespace std;

int daysInMonth(int year, int month) {
    if (month < 1 || month > 12) {
        cout << "Invalid month. Please enter a value between 1 and 12." << endl;
        return -1;
    }
}

int main() {
    int year, month;
    
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month (1-12): ";
    cin >> month;
    
    int result = daysInMonth(year, month);
    
    if (result != -1) {
        cout << "Number of days in year " << year << " and month " << month << " is: " << result << endl;
    }
    
    return 0;
}