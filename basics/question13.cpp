#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num < 2) return false; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true; 
}

int countPrimes(int n) {
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            count++; 
        }
    }
    return 0;
}

int main() {
    int n;
    cout << "Enter a positive number: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number!" << endl;
    } else {
        cout << "Number of prime numbers less than " << n << " is " << countPrimes(n) << endl;
    }

    return 0;
}
