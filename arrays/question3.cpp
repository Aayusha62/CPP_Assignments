#include <iostream>
#include <algorithm>
using namespace std;

void findKLargest(int arr[], int size, int k) {
    if (k > size || k <= 0) {
        cout << "Invalid value of k." << endl;
        return;
    }
    sort(arr, arr + size, greater<int>());
    cout << "The " << k << " largest elements are: ";
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    findKLargest(arr, size, k);
    return 0;
}