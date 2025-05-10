#include <iostream>
using namespace std;

int main() {
    int decimal;
    string binary = "0";

    cout << "Enter the decimal number: ";
    cin >> decimal;

    // Convert decimal to binary
    while (decimal > 0) {
        binary = char(decimal % 2 + '0') + binary;  
        decimal /= 2;  // Divide by 2
    }
    cout << "The binary number is: " << binary << endl;

    return 0;
}