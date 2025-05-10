#include <iostream>
#include <cmath>

using namespace std;

int binaryToDecimal(string binary) {
    int decimal = 0;
    int length = binary.length();

    // Convert binary to decimal
    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - 1 - i); 
        } else if (binary[i] != '0') {
            cout << "Error: Invalid binary number!\n";
            return -1;
        }
    }
    return decimal;
}

int main() {
    string binary;
    
    cout << "Input a binary number: ";
    cin >> binary;

    int decimal = binaryToDecimal(binary);

    if (decimal != -1) {
        cout << "The decimal number: " << decimal << endl;
    }

    return 0;
}
