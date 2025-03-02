#include <iostream>
using namespace std;

int countOccurrences(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    int count = 0;

    // Binary search to find the leftmost occurrence
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            // Count occurrences by checking left and right side
            int left = mid, right = mid;

            // Count occurrences on the left side
            while (left >= 0 && arr[left] == target) {
                count++;
                left--;
            }

            // Count occurrences on the right side
            while (right < size && arr[right] == target) {
                count++;
                right++;
            }
            break;
        } 
        else if (arr[mid] < target) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }

    return count;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    int result = countOccurrences(arr, size, target);
    cout << "The number " << target << " appears " << result << " times in the array." << endl;

    return 0;
}
