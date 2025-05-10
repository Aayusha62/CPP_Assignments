#include <iostream>
#include <vector>
using namespace std;

string one[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
string ten[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

string numberToWords(int num) {
    if (num == 0) return "Zero";
    
    string result = "";
    
    if (num >= 1000) {
        result += one[num / 1000] + " Thousand ";
        num %= 1000;
    }
    if (num >= 100) {
        result += one[num / 100] + " Hundred ";
        num %= 100;
    }
    if (num >= 20) {
        result += ten[num / 10] + " ";
        num %= 10;
    }
    if (num > 0) {
        result += one[num] + " ";
    }
    
    return result;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (num < 0) {
        cout << "Invalid input." << endl;
    } else {
        cout << "Output: " << numberToWords(num) << endl;
    }
    
    return 0;
}
