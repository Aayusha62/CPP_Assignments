#include <iostream>
using namespace std;

void capitalizeWords(string &str) {
    bool capitalize = true; 

    for (int i = 0; i < str.length(); i++) {
        if (capitalize && isalpha(str[i])) { 
            str[i] = toupper(str[i]);
            capitalize = false;
        } 
        else if (str[i] == ' ') { 
            capitalize = true;
        }
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); 

    capitalizeWords(str); 

    cout << "Capitalized string: " << str << endl;

    return 0;
}