#include <iostream>
#include <vector>

using namespace std;

void createMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n, n));
    cout << "Create an " << n << " x " << n << " matrix by said integer:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter an integer value: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        createMatrix(n);
    }

    return 0;
}