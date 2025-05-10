#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;

    // Loop for each row
    for (int i = 1; i <= rows; i++) {
        // Loop to print leading spaces for right justification
        for (int j = i; j < rows; j++) {
            cout << " "; // Print spaces
        }

        // Loop to print numbers in each row
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
