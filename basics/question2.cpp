#include <iostream>
using namespace std;

void swapNumbers() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    cout << "After swapping, first number: " << a << endl;
    cout << "After swapping, second number: " << b << endl;
}
