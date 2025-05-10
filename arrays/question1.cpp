#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void findLargestThree(const vector<int>& arr) {
    if (arr.size() < 3) {
        cout << "Array should have at least three elements." << endl;
        return;
    }
    
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;
    
    for (int num : arr) {
        if (num > first) {
            third = second;
            second = first;
            first = num;
        } else if (num > second) {
            third = second;
            second = num;
        } else if (num > third) {
            third = num;
        }
    }
    
    cout << "Largest three elements: " << first << " " << second << " " << third << endl;
}

int main() {
    vector<int> arr = {10, 4, 3, 50, 23, 90};
    
    findLargestThree(arr);
    
    return 0;
}
