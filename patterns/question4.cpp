#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;

    // Loop for each row
    for (int i = 1; i <= rows; i++) {
        // Print spaces before the stars
        for (int j = 1; j <= rows - i; j++) {
            cout << " "; // Space for center alignment
        }

        // Print stars in each row
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*"; 

        cout << endl;
    }

    return 0;
}
