#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int studentClass;
    int rollNumber;
    float marks;

public:
    // Function to input student details
    void inputDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Class: ";
        cin >> studentClass;
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Function to calculate grade
    char calculateGrade() {
        if (marks >= 90) return 'A';
        else if (marks >= 80) return 'B';
        else if (marks >= 70) return 'C';
        else if (marks >= 60) return 'D';
        else return 'F';
    }

    // Function to display student details
    void displayDetails() {
        cout << "Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    Student s;
    s.inputDetails();
    s.displayDetails();
    return 0;
}
