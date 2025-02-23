#include <iostream>
using namespace std;

void sumEvenOdd(int start, int end, int &sumEven, int &sumOdd)
{
    if (start > end)
        return;
    if (start % 2 == 0)
        sumEven += start;
    else
        sumOdd += start;
    sumEvenOdd(start + 1, end, sumEven, sumOdd);
}

int main()
{
    int sumEven = 0, sumOdd = 0;
    sumEvenOdd(1, 10, sumEven, sumOdd);
    cout << "Sum of evens: " << sumEven << ", Sum of odds: " << sumOdd << endl;
    return 0;
}