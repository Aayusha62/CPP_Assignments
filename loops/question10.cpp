#include <iostream>
using namespace std;

int main() {
    int start, n, diff, sum = 0, term;

    cout << "Input the starting number of the A.P. series: ";
    cin >> start;
    cout << "Input the number of items for the A.P. series: ";
    cin >> n;
    cout << "Input the common difference of A.P. series: ";
    cin >> diff;

    cout << "The Sum of the A.P. series are: ";

    // Loop to generate and sum A.P. terms
    for (int i = 0; i < n; i++) {
        term = start + i * diff;  // Calculate the current term
        cout << term; 
        if (i < n - 1) cout << " + ";  // Print "+" between terms
        sum += term;  // Add term to sum
    }

    // result
    cout << " = " << sum << endl;

    return 0;
}
