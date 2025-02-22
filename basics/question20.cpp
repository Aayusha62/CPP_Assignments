#include <iostream>
using namespace std;

void decimalToHexadecimal(int decimal) {
    char hex[32]; 
    int i = 0;

    if (decimal == 0) {
        cout << "0";
        return;
    }

    while (decimal > 0) {
        int remainder = decimal % 16;

        if (remainder < 10)
            hex[i] = remainder + '0'; 
        else
            hex[i] = remainder - 10 + 'A'; 

        decimal /= 16;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        cout << hex[j];
    }
}

int main() {
    int decimal;
    
    cout << "Input a decimal number: ";
    cin >> decimal;

    cout << "The hexadecimal number is: ";
    decimalToHexadecimal(decimal);
    
    cout << endl;
    return 0;
}
