#include <iostream>

using namespace std;

int productOfDigits(int num) {
    int product = 1; 

    while (num > 0) {
        int digit = num % 10; 
        product *= digit; 
        num /= 10;
    }

    return product;
}

int main() {
    int num;
    cout << "Input a number: ";
    cin >> num;

    if (num == 0) {
        cout << "The product of digits of " << num << " is: 0" << endl;
    } else {
        cout << "The product of digits of " << num << " is: " << productOfDigits(num) << endl;
    }

    return 0;
}
