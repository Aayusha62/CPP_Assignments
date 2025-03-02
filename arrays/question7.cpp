#include <iostream>
#include <unordered_set>
using namespace std;

void findFirstRepeating(int arr[], int size) {
    unordered_set<int> seen;
    for (int i = 0; i < size; i++) {
        if (seen.find(arr[i]) != seen.end()) {
            cout << "First repeating element: " << arr[i] << endl;
            return;
        }
        seen.insert(arr[i]);
    }
    cout << "No repeating elements found." << endl;
}

int main() {
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    findFirstRepeating(arr, size);

    return 0;
}