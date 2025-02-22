#include <iostream>
using namespace std;

void sumAndCountDigits() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int sum = a + b;
    int count = to_string(sum).length();
    cout << "Sum: " << sum << ", Number of digits: " << count << endl;

int main() {
    
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Number after swapping first and last digits: " << swapFirstLastDigit(num) << endl;
    
    int start, end;
    cout << "Enter start and end numbers: ";
    cin >> start >> end;
    cout << "Sum of digits between " << start << " and " << end << " is: " << sumDigitsBetween(start, end) << endl;
    
    // Find three highest numbers
    findThreeHighest();
    
    // Compute sum and count digits
    sumAndCountDigits();

    return 0;
}
}