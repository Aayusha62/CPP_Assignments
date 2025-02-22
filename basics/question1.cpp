
#include <iostream>
#include <string>

int main() {
    std::string firstName, lastName;

    // Taking user input
    std::cout << "Input First Name: ";
    std::cin >> firstName;
    
    std::cout << "Input Last Name: ";
    std::cin >> lastName;

    // Printing the name in reverse order
    std::cout << "Name in reverse is: " << lastName << " " << firstName << std::endl;

    return 0;
}