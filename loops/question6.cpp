#include <iostream>
using namespace std;

int main() {
    int n;

    // Get user input
    cout << "Input the number of terms: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "The number is : " << i << " and the cube of " << i << " is: " << (i * i * i) << endl;
    }

    return 0;
}
