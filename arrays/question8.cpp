#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

void findSecondLowestHighest(int arr[], int size) {
    if (size < 2) {
        cout << "Array should have at least two elements." << endl;
        return;
    }
    
    sort(arr, arr + size);
    
    int secondLowest = INT_MAX, secondHighest = INT_MIN;
    int lowest = arr[0], highest = arr[size - 1];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > lowest) {
            secondLowest = arr[i];
            break;
        }
    }
    
    for (int i = size - 2; i >= 0; i--) {
        if (arr[i] < highest) {
            secondHighest = arr[i];
            break;
        }
    }
    
    if (secondLowest == INT_MAX || secondHighest == INT_MIN) {
        cout << "No second distinct lowest or highest number found." << endl;
    } else {
        cout << "Second Lowest: " << secondLowest << endl;
        cout << "Second Highest: " << secondHighest << endl;
    }
}

int main() {
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    findSecondLowestHighest(arr, size);

    return 0;
}