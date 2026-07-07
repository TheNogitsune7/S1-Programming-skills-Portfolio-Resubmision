// ===============================================
// Simple Name Search Engine
// ===============================================
// - Stores names: "Jake", "Zac", "Ian", "Ron", "Sam", "Dave" in an array
// - Searches for "Sam" in the array
// - Loops through the array and tests each index
// - If the search term is found, prints a message
// - Optional: allow the user to enter the name to be searched
// ===============================================

#include <iostream>
#include <string>

int main() {
    // 1. Declare and initialise the array
    std::string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};

    // 2. Work out how many elements are in the array
    int arraySize = sizeof(names) / sizeof(names[0]);

    // 3. The string we are searching for (by default, "Sam")
    std::string searchName = "Sam";

    // ----- Optional requirement: let the user choose a name -----
    std::cout << "The list contains: Jake, Zac, Ian, Ron, Sam, Dave\n";
    std::cout << "Enter a name to search for (or just type Sam): ";
    std::cin >> searchName;

    // 4. Flag to track if we find the name
    bool found = false;

    // 5. Loop through the array and compare each element
    for (int i = 0; i < arraySize; ++i) {
        if (names[i] == searchName) {   // test this index against the search term
            found = true;
            std::cout << "Name \"" << searchName
                      << "\" found at index " << i << " in the array.\n";
            break; // stop once we’ve found it
        }
    }

    // 6. If not found, print a message
    if (!found) {
        std::cout << "Name \"" << searchName
                  << "\" was not found in the list.\n";
    }

    return 0;
}
