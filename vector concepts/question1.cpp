#include <iostream>
#include <vector>

using namespace std;

vector<int> findSmallerElements(const vector<int>& vec) {
    vector<int> result;

    for (int i = 1; i < vec.size() - 1; ++i) {
        if (vec[i] < vec[i - 1] && vec[i] < vec[i + 1]) {
            result.push_back(vec[i]);
        }
    }
    
    return result;
}

int main() {
    vector<int> vec = {1, 2, 5, 0, 3, 1, 7};
    
    cout << "Original Vector elements: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;
    
    vector<int> smallerElements = findSmallerElements(vec);
    
    cout << "Vector elements that are smaller than their adjacent neighbours: ";

    if (smallerElements.empty()) {
        cout << "None" << endl;
    } else {
        for (int i : smallerElements) {
            cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
}