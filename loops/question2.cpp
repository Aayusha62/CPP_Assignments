#include <iostream>
using namespace std;

int sumSeries(int n) {
    int sum = 0, term = 0;
    for (int i = 0; i < n; i++) {
        term = term * 10 + 1;
        sum += term;
    }
    return sum;
}

int main() {
    int n;
    cout << "Input number of terms: ";
    cin >> n;
    
    int term = 0;
    for (int i = 0; i < n; i++) {
        term = term * 10 + 1;
        if (i > 0) cout << " + ";
        cout << term;
    }
    
    cout << "The sum of the series is: " << sumSeries(n) << endl;
    return 0;
}