#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int lastPrimeBefore(int num) {
    for (int i = num - 1; i > 1; i--) {
        if (isPrime(i)) {
            return i;
        }
    }
    return -1;
}

int main() {
    int num;
    cout << "Input a number to find the last prime number before the number: ";
    cin >> num;
    
    int lastPrime = lastPrimeBefore(num);
    if (lastPrime != -1) {
        cout << lastPrime << "is the last prime number before " << num << endl;
    } else {
        cout << "No prime number found." << num << endl;
    }
    
    return 0;
}
