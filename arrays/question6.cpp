#include <iostream>
using namespace std;

void findRepeating(int arr[], int size) {
    cout << "Repeating elements: ";
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    findRepeating(arr, size);

    return 0;
}
