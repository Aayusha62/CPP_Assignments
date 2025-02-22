#include <iostream>

using namespace std;

void printFactors(int num) {
    cout << "The factors are: ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) { 
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Input a number: ";
    cin >> num;

    if (num <= 0) {
        cout << "Please enter a positive number!" << endl;
    } else {
        printFactors(num);
    }

    return 0;
}
