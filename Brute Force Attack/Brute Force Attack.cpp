// ===============================================
// Brute-Force Password Programme
// ===============================================
// Task:
//  - The correct password is 12345.
//  - Let the user keep entering passwords in a while loop
//    until they get the correct one.
//  - When the correct password is entered, print:
//        "Welcome to the Secure Area"
//
// Optional (also included here):
//  - User has a maximum of 5 attempts.
//  - After each wrong attempt, tell the user how many
//    attempts are left.
//  - If all 5 attempts are wrong, stop and say:
//        "The authorities have been alerted!"
// ===============================================

#include <iostream>  // lets us use std::cout and std::cin

int main() {
    // The correct password for the safe
    const int correctPassword = 12345;

    // Variable to store what the user types each time
    int userPassword = 0;

    // How many attempts the user has already used
    int attemptsUsed = 0;

    // Maximum number of attempts allowed (for the optional part)
    const int maxAttempts = 5;

    // This will become true when the correct password is entered
    bool unlocked = false;

    // Explain to the user what is happening
    std::cout << "=== Secure Safe Access System ===\n";
    std::cout << "Correct password is a 5-digit number.\n";
    std::cout << "You have " << maxAttempts << " attempts.\n\n";

    // --------------------------------------------
    // WHILE LOOP:
    // Keep asking for a password as long as:
    //  - the safe is NOT unlocked
    //  - and we have NOT used up all attempts
    // --------------------------------------------
    while (!unlocked && attemptsUsed < maxAttempts) {
        std::cout << "Enter password: ";
        std::cin >> userPassword;  // read the number typed by the user

        // Increase the number of attempts used
        attemptsUsed++;

        // Check if the password entered is correct
        if (userPassword == correctPassword) {
            // If correct:
            unlocked = true;  // mark the safe as unlocked
            std::cout << "Welcome to the Secure Area\n";
        } else {
            // If incorrect:
            int attemptsLeft = maxAttempts - attemptsUsed;  // how many tries remain

            if (attemptsLeft > 0) {
                // Still have some attempts left
                std::cout << "Incorrect password. You have "
                          << attemptsLeft << " attempt(s) remaining.\n";
            }
            // If attemptsLeft == 0, the loop will end after this iteration
        }
    }

    // --------------------------------------------
    // After the while loop finishes, we check why:
    //  - If 'unlocked' is still false, then either:
    //      * they used all attempts and never got it right
    // --------------------------------------------
    if (!unlocked) {
        std::cout << "\nToo many incorrect attempts!\n";
        std::cout << "The authorities have been alerted!\n";
    }

    // Program finished successfully
    return 0;
}
