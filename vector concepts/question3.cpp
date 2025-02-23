#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

vector<string> filterStringsWithNumbers(const vector<string>& vec) {
    vector<string> result;
    for (const string &word : vec) {
        for (char ch : word) {
            if (isdigit(ch)) {
                result.push_back(word);
                break;
            }
        }
    }
    return result;
}

int main() {
    vector<string> vec = {"red", "green23", "1black", "white"};
    
    vector<string> filteredVec = filterStringsWithNumbers(vec);
    
    cout << "Strings containing numbers: ";
    for (const string &word : filteredVec) {
        cout << word << " ";
    }
    cout << endl;
    
    return 0;
}
