// ===============================================
// Is it even?
// ===============================================
// - Asks the user for a number in main()
// - Passes the number to a function
// - Function returns a message saying whether
//   the number is even or odd
// - main() prints the returned message
// ===============================================

#include <iostream>
#include <string>

// Function that determines if a number is even or odd
std::string isEven(int number) {
    if (number % 2 == 0) {
        return "The provided number is even";
    } else {
        return "The provided number is odd";
    }
}

int main() {
    int value;

    // Ask the user for a number (in main)
    std::cout << "Please enter a number: ";
    std::cin >> value;

    // Call the function and get the returned message
    std::string result = isEven(value);

    // Output the returned message from main
    std::cout << result << std::endl;

    return 0;
}
