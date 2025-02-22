#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;  
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
         return false; 
    }
    return true;  // Otherwise, it's prime
}

int main() {
    int upperLimit;
    // Get the upper limit from the user
    cout << "Input the upper limit: ";
    cin >> upperLimit;

    cout << "The non-prime numbers are: ";

    for (int i = 1; i <= upperLimit; i++) {
        if (!isPrime(i)) { // If the number is not prime, print it
            cout << i << " ";
        }
    }

    return 0;
}
