#include <iostream>

using namespace std;

bool isPowerOfThree(int num) {
    if (num <= 0) return false;
    while (num % 3 == 0) {  
        num /= 3;
    }

    return num == 1;  
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPowerOfThree(num)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
