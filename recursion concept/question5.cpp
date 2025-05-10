#include <iostream>
using namespace std;

bool isPalindrome(string &s, int left, int right)
{
    if (left >= right)
        return true;
    if (s[left] != s[right])
        return false;
    return isPalindrome(s, left + 1, right - 1);
}

int main()
{
    string palindromeStr = "madam";
    cout << "Is palindrome: " << (isPalindrome(palindromeStr, 0, palindromeStr.size() - 1) ? "Yes" : "No") << endl;
    return 0;
}