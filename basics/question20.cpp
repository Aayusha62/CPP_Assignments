#include <iostream>
using namespace std;

int main() {
    int decimal;
    string hex = "";
    char hexDigits[] = "0123456789ABCDEF";  // Hexadecimal digits

    // Input the decimal number
    cout << "Input a decimal number: ";
    cin >> decimal;

    // Convert decimal to hexadecimal
    while (decimal > 0) {
        hex = hexDigits[decimal % 16] + hex; 
        decimal /= 16;  // Divide by 16
    }

    // Output
    cout << "The hexadecimal number is : " << hex << endl;

    return 0;
}