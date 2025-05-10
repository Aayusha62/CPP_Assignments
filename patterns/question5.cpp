#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;

    // Loop for each row
    for (int i = 1; i <= rows; i++) {
        // Loop to print numbers in each row
        for (int j = 1; j <= i; j++) {
            cout << i << " "; // Print the current row number
        }
    
        cout << endl;
    }

    return 0;
}
