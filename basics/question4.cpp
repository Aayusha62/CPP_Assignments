#include <iostream>
using namespace std; 
int sumDigitsBetween(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        int num = i;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
    }
    return sum;
}