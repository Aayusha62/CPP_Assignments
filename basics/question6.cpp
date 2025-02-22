#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sumAndCountDigits() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int sum = a + b;
    int count = to_string(sum).length();
    cout << "Sum: " << sum << ", Number of digits: " << count << endl;

    return;
}