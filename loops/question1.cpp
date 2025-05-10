#include <iostream>
using namespace std;

int main() {
    cout << "enter the perfect numbers between 1 to 500 are:" << endl;
//The perfect numbers between 1 to 500 are: 6, 28, 496.

    for (int num = 1; num <= 500; num++) {
        int sum = 0;

        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }

        if (sum == num) {
            cout << num << endl;
        }
    }

    return 0;
}