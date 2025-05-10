#include <iostream>
#include <string>
using namespace std;

int swapFirstLast(int num) {
    string s = to_string(num);
    swap(s[0], s[s.length() - 1]);
    return stoi(s);
}

int main() {
    int num;
    cout << "Input any number: ";
    cin >> num;
    cout << "The number after swapping the digits is: " << swapFirstLast(num) << endl;
    return 0;
}