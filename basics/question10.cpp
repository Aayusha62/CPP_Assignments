#include <iostream>

using namespace std;

int digitalRoot(int num) {
    while (num >= 10) {  
        int sum = 0;
        while (num > 0) {
            sum += num % 10;  
            num /= 10;        
        }
        num = sum;
    }
    return num;
}

int main() {
    int num;
    cout << "Enter a non-negative number: ";
    cin >> num;

    if (num < 0) {
        cout << "Please enter a non-negative number!" << endl;
    } else {
        cout << "Digital root of " << num << " is: " << digitalRoot(num) << endl;
    }

    return 0;
}
