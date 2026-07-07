// ===============================================
// Month Days Finder
// ===============================================
// This program asks the user to enter a month number
// (1 = January, 2 = February, ..., 12 = December)
// and then uses a switch statement to tell the user
// how many days are in that month.
// ===============================================

#include <iostream>  // Needed for std::cout and std::cin

int main() {
    int month;  // Variable to store the month number

    // Ask the user for the month
    std::cout << "Enter a month number (1-12): ";
    std::cin >> month;

    // Use a switch statement to decide how many days are in the month
    switch (month) {

        // -----------------------------
        // Months with 31 days
        // -----------------------------
        case 1:   // January
        case 3:   // March
        case 5:   // May
        case 7:   // July
        case 8:   // August
        case 10:  // October
        case 12:  // December
            std::cout << "This month has 31 days." << std::endl;
            break;  // Exit the switch after handling these cases

        // -----------------------------
        // Months with 30 days
        // -----------------------------
        case 4:   // April
        case 6:   // June
        case 9:   // September
        case 11:  // November
            std::cout << "This month has 30 days." << std::endl;
            break;  // Exit the switch after handling these cases

        // -----------------------------
        // February (special case)
        // -----------------------------
        case 2:   // February
            std::cout << "This month has 28 days (29 in a leap year)." << std::endl;
            break;  // Exit the switch

        // -----------------------------
        // Anything else is invalid
        // -----------------------------
        default:
            // This runs if the user did NOT enter a number 1–12
            std::cout << "Invalid month number. Please enter a number between 1 and 12." << std::endl;
            break;
    }

    // Return 0 to show the program finished successfully
    return 0;
}