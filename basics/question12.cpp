#include <iostream>

using namespace std;
int integerSquareRoot(int n) {
    if (n < 0) return -1; 

    int left = 0, right = n, ans = 0;

    while (left <= right) {
        long long mid = left + (right - left) / 2;
        long long square = mid * mid;

        if (square == n) {
            return 0; // Perfect square
        } else if (square < n) {
            ans = mid; 
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return ans; 
}

int main() {
    int n;
    cout << "Enter a non-negative number: ";
    cin >> n;

    if (n < 0) {
        cout << "Square root is not defined !" << endl;
    } else {
        cout << "Square root of " << n << " = " << integerSquareRoot(n) << endl;
    }

    return 0;
}
