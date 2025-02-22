#include <iostream>
using namespace std;

// Function to find one's complement
string onesComplement(string binary) {
    for (char &bit : binary) {
        bit = (bit == '0') ? '1' : '0'; 
    }
    return binary;
}

// Function to find two's complement
string twosComplement(string binary) {
    // Step 1: Find one's complement
    binary = onesComplement(binary);

    // Step 2: Add 1 to the one's complement
    int carry = 1;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1' && carry == 1) {
            binary[i] = '0';
        } else {
            binary[i] = (binary[i] == '0') ? '1' : '0'; 
            carry = 0; 
            break;
        }
    }
    
    return binary;
}

int main() {
    string binary;
    cout << "Input an 8-bit binary value: ";
    cin >> binary;

    if (binary.length() != 8 || binary.find_first_not_of("01") != string::npos) {
        cout << "Invalid input! Please enter exactly 8 binary digits (0s and 1s)." << endl;
    } else {
        cout << "The original binary = " << binary << endl;
        string onesComp = onesComplement(binary);
        cout << "After one's complement the value = " << onesComp << endl;
        cout << "After two's complement the value = " << twosComplement(binary) << endl;
    }

    return 0;
}
