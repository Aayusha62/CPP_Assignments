#include <iostream>
using namespace std;

class Triangle {
private:
    float side1, side2, side3;

public:
    // Function to input triangle sides
    void inputSides() {
        cout << "Enter three sides of the triangle: ";
        cin >> side1 >> side2 >> side3;
    }

    // Function to determine the type of triangle
    void determineType() {
        if (side1 == side2 && side2 == side3) {
            cout << "The triangle is Equilateral." << endl;
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            cout << "The triangle is Isosceles." << endl;
        } else {
            cout << "The triangle is Scalene." << endl;
        }
    }
};

int main() {
    Triangle t;
    t.inputSides();
    t.determineType();
    return 0;
}
