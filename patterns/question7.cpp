#include <iostream>
using namespace std;

// Function to calculate the value of binomial coefficient
int binomialCoefficient(int n, int r) {
    if (r == 0 || r == n) {
        return 1; // Base case: C(n, 0) = C(n, n) = 1
    } else {
        return binomialCoefficient(n - 1, r - 1) + binomialCoefficient(n - 1, r);
    }
}

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;

    // Loop for each row of Pascal's triangle
    for (int i = 0; i < rows; i++) {
        // Loop to print values in each row
        for (int j = 0; j <= i; j++) {
            // Calculate binomial coefficient and print it
            cout << binomialCoefficient(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}
