#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

vector<string> capitalizeFirstChar(vector<string> vec) {
    for (string &word : vec) {
        if (!word.empty()) {
            word[0] = toupper(word[0]);
        }
    }
    return vec;
}

int main() {
    vector<string> vec = {"red", "green", "black", "white", "Pink"};
    
    vec = capitalizeFirstChar(vec);
    
    cout << "Capitalized Vector elements: ";
    for (const string &word : vec) {
        cout << word << " ";
    }
    cout << endl;
    
    return 0;
}
