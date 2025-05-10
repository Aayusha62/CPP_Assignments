#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findThirdLargestString(vector<string>& arr) {
    if (arr.size() < 3) {
        cout << "Array should have at least three distinct strings." << endl;
        return;
    }
    
    sort(arr.begin(), arr.end(), greater<string>());
    
    int count = 1;
    for (size_t i = 1; i < arr.size(); i++) {
        if (arr[i] != arr[i - 1]) {
            count++;
        }
        if (count == 3) {
            cout << "Third largest string: " << arr[i] << endl;
            return;
        }
    }
    
    cout << "No third distinct largest string found." << endl;
}

int main() {
    vector<string> arr = {"apple", "banana", "cherry", "date", "banana", "cherry"};
    
    cout << "Original array: ";
    for (const auto& str : arr) {
        cout << str << " ";
    }
    cout << endl;

    findThirdLargestString(arr);

    return 0;
}