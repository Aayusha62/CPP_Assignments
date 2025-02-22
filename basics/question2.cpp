#include <iostream>
using namespace std;

void swapNumbers() {
    int a, b;
    cout << "Input 1st number: ";
    cin >> a;
    cout << "Input 2nd number: ";
    cin >> b;
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    cout << "After swapping the 1st number is: " << a << endl;
    cout << "After swapping the 2nd number is: " << b << endl;

    return ;
}