#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findThreeHighest() {
    vector<int> numbers;
    int n, num;
    cout << "Enter how many numbers: ";
    cin >> n;
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> num;
        numbers.push_back(num);
    }
    sort(numbers.rbegin(), numbers.rend());
    cout << "Three highest numbers: ";
    for (int i = 0; i < min(3, (int)numbers.size()); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}