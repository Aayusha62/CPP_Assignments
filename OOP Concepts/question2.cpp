#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    void setDate(int d, int m, int y) {
        if (isValid(d, m, y)) {  
            day = d;
            month = m;
            year = y;
        } else {
            cout << "Invalid date!" << endl;
        }
    }

    void getDate() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }

    // Function to check if the date is valid
    bool isValid(int d, int m, int y) {
        if (m < 1 || m > 12 || d < 1 || d > 31) return false; 

        if (m == 4 || m == 6 || m == 9 || m == 11) { 
            // April, June, Sept, Nov = 30 days
            if (d > 30) return false;
        } else if (m == 2) { // February
            bool leap = (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
            if (leap && d > 29) return false;
            if (!leap && d > 28) return false;
        }
        return true;
    }
};

int main() {
    Date myDate;
    int d, m, y;

    //Input
    cout << "Enter day, month, and year: ";
    cin >> d >> m >> y;

    // Result
    myDate.setDate(d, m, y);
    myDate.getDate();

    return 0;
}
