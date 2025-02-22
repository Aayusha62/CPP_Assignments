#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printTopThree(vector<int> &nums) {
    sort(nums.rbegin(), nums.rend()); 
    cout << "The three highest numbers are: ";
    for (int i = 0; i < 3 && i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, num;
    vector<int> nums;
    cout << "Enter how many numbers: ";
    cin >> n;
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> num;
        nums.push_back(num);
    }
    printTopThree(nums);
    return 0;
}