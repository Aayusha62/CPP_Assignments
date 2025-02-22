#include <iostream>

using namespace std;

// Function to compute the integer square root using binary search
int integerSquareRoot(int n) {
    if (n < 0) return -1; // Invalid input check

    int left = 0, right = n, ans = 0;

    while (left <= right) {
        long long mid = left + (right - left) / 2;
        long long square = mid * mid;

        if (square == n) {
            return mid; // Perfect square
        } else if (square < n) {
            ans = mid; // Store the last valid result
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return 0; 
}

int main() {
    int n;
    cout << "Enter a non-negative number: ";
    cin >> n;

    if (n < 0) {
        cout << "Square root is not defined for negative numbers!" << endl;
    } else {
        cout << "Square root of " << n << " = " << integerSquareRoot(n) << endl;
    }

    return 0;
}
