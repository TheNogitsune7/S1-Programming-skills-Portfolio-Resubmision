#include <iostream>
#include <string>
#include <limits>

int main() {
    std::string name;
    std::string hometown;
    int age;

    std::cout << "Enter your full name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your hometown: ";
    std::getline(std::cin, hometown);

    std::cout << "Enter your age: ";
    while (!(std::cin >> age)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Please enter a valid number for age: ";
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Name: " << name << '\n'
              << "Hometown: " << hometown << '\n'
              << "Age: " << age << std::endl;

    return 0;
}