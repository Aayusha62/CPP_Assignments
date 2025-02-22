#include <iostream>
using namespace std;

void decimalToBinary(int decimal) {
    int binary[32]; 
    int i = 0;

    if (decimal == 0) {
        cout << "0";
        return;
    }

    while (decimal > 0) {
        binary[i] = decimal % 2; 
        decimal = 2; 
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
}

int main() {
    int decimal;

    cout << "Input a decimal number: ";
    cin >> decimal;

    cout << "The binary number is: ";
    decimalToBinary(decimal);
    
    cout << endl;
    return 0;
}
