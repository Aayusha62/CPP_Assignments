#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
using namespace std;

string wordWithMostRepeatedLetters(const string &str) {
    istringstream stream(str);
    string word, maxWord;
    int maxCount = 0;
    
    while (stream >> word) {
        unordered_map<char, int> freq;
        int highestFreq = 0;
        
        for (char ch : word) {
            freq[ch]++;
            highestFreq = max(highestFreq, freq[ch]);
        }
        
        if (highestFreq > maxCount) {
            maxCount = highestFreq;
            maxWord = word;
        }
    }
    return maxWord;
}

int main() {
    string str;
    
    cout << "Input a string: ";
    getline(cin, str);
    
    string result = wordWithMostRepeatedLetters(str);
    
    cout << "Thw word having highest number of repeated letters: " << result << endl;
    
    return 0;
}