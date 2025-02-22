#include <iostream>
using namespace std;

int main() {
    int n, first = 0, second = 1, next;

   
    cout << "Input number of terms to display: ";
    cin >> n;
    // Here is the Fibonacci series upto to 10 terms: 0 1 1 2 3 5 8 13 21 34

    cout << "the Fibonacci series up to " << n << " terms: ";

    // Print Fibonacci series
    for (int i = 0; i < n; i++) {
        cout << first << " ";
        next = first + second; 
        first = second;  
        second = next;  
    }
    return 0;
}
