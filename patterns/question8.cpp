#include <iostream>
using namespace std;

int main() {
    int rows;

    // Input number of rows
    cout << "Input the number of rows: ";
    cin >> rows;

    // Loop for each row
    for (int i = 1; i <= rows; i++) {
        // Loop to print numbers in each row
        for (int j = i; j <= rows; j++) {
            cout << j; // Print number starting from i to rows
        }
        cout << endl;
    }

    return 0;
}
