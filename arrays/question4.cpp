#include <iostream>
using namespace std;

int findSmallestMissing(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            return i + 1;
        }
    }
    return n + 1;
}

int main()
{
    int arr[] = {1, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The smallest missing element is: " << findSmallestMissing(arr, n) << endl;
    return 0;
}