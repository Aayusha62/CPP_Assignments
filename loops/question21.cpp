#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return 0;
}

int main() {
    cout << "The perfect numbers between 1 to 500 are:\n";
    for (int i = 1; i <= 500; i++) {
        if (isPerfect(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}