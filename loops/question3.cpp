#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, term = 0;
    
    cout << "Input number of terms: ";
    cin >> n;
    
    cout << "Series: ";
    for (int i = 0; i < n; i++) {
        term = term * 10 + 1;
        sum += term;
        if (i > 0) cout << " + ";
        cout << term;
    }
    
    cout << "\nThe sum of the series is: " << sum << endl;
    
    return 0;
}
