#include <iostream>
#include <unordered_set>
using namespace std;

bool containsAllLetters(const string& first, const string& second) {
    unordered_set<char> letters(first.begin(), first.end());
    
    for (char ch : second) {
        if (letters.find(ch) == letters.end()) {
            return false;
        }
    }
    return true;
}

int main() {
    string first, second;
    cout << "Enter first string: ";
    cin >> first;
    cout << "Enter second string: ";
    cin >> second;
    
    if (containsAllLetters(first, second)) {
        cout << "First string contains all letters from second string: true" << endl;
    } else {
        cout << "First string contains all letters from second string: false" << endl;
    }
    
    return 0;
}