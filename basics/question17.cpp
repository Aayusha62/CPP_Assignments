#include <iostream>
#include <string>

using namespace std;

string onesComplement(string binary) {
    for (int i = 0; i < binary.length(); i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else
            binary[i] = '0';
    }
    return binary;
}

string twosComplement(string onesComp) {
    int n = onesComp.length();
    bool carry = true; 

    for (int i = n - 1; i >= 0; i--) {
        if (onesComp[i] == '1' && carry) {
            onesComp[i] = '0';
        } else if (onesComp[i] == '0' && carry) {
            onesComp[i] = '1';
            carry = false; 
        }
    }
    return 0;
}

int main() {
    string binary;
    
    cout << "Input an 8-bit binary value: ";
    cin >> binary;

    if (binary.length() != 8) {
        cout << "Error: Please enter exactly 8 bits.\n";
        return 1;
    }

    string onesComp = onesComplement(binary);
    string twosComp = twosComplement(onesComp);

    cout << "The original binary = " << binary << endl;
    cout << "After one's complement the value = " << onesComp << endl;
    cout << "After two's complement the value = " << twosComp << endl;

    return 0;
}
