#include <iostream>
using namespace std;

void onesComplement(string binary) {
    cout << "The original binary = " << binary << endl;
    cout << "After one's complement the number = ";
    
    for (char bit : binary) {
        cout << (bit == '0' ? '1' : '0');
    }

    cout << endl;
}

int main() {
    string binary;
    cout << "Input an 8-bit binary value: ";
    cin >> binary;

    if (binary.length() != 8 || binary.find_first_not_of("01") != string::npos) {
        cout << "Invalid input!" << endl;
    } else {
        onesComplement(binary);
    }
    return 0;
}
