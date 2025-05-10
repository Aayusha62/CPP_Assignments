#include <iostream>
using namespace std;

string removeCharacter(string str, char ch) {
    string result = "";
    for (char c : str) {
        if (c != ch) {
            result += c;
        }
    }
    return result;
}

int main() {
    string str;
    char ch;
    
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter a character to remove: ";
    cin >> ch;
    
    cout << "Updated string: " << removeCharacter(str, ch) << endl;
    
    return 0;
}