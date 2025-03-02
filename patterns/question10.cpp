#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input the number of Letters (less than 26) in the Pyramid: ";
    cin >> n;

    // Loop for each row
    for (int i = 1; i <= n; i++) {
        // Loop to print leading spaces for center alignment
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Loop to print increasing letters from 'A'
        for (int j = 1; j <= i; j++) {
            cout << char('A' + j - 1) << " ";
        }

        // Loop to print decreasing letters
        for (int j = i - 1; j >= 1; j--) {
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }

    return 0;
}
