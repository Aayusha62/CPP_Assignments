#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;

    // Loop to print the pattern
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;  // Print numbers in increasing order
        }
        cout << endl;  
    }

    return 0;
}
