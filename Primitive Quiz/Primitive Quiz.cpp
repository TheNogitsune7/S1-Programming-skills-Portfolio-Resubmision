// ===============================================
// Simple Question and Answer Programme
// ===============================================
// This programme first asks one question:
//   "What is the capital of France?"
// Then, as an advanced part, it runs a small
// European capitals quiz with multiple questions.
// It also ignores capital letters (Paris / PARIS / paris).
// ===============================================

#include <iostream> // Lets us use std::cout (print) and std::cin (input)
#include <string>   // Lets us use std::string to store text
#include <cctype>   // Lets us use std::tolower to change letters to lowercase

// -------------------------------------------------
// Helper function: turn a whole string into lowercase
// This is used so that "Paris", "PARIS" or "PaRiS"
// are all treated the same when we compare answers.
// -------------------------------------------------
std::string toLower(std::string text) {
    // Go through each character in the string
    for (char &ch : text) {
        // std::tolower works on single chars
        // We cast to unsigned char for safety
        ch = static_cast<char>(std::tolower(static_cast<unsigned char>(ch)));
    }
    // Return the modified (now lowercase) string
    return text;
}

int main() {
    // ================================
    // PART 1: Single France question
    // ================================

    // Variable to store the user's answer to the France question
    std::string answer;

    // Ask the question
    std::cout << "Question: What is the capital of France?" << std::endl;

    // Prompt the user to type their answer
    std::cout << "Your answer: ";

    // Read a whole line from the user (in case they type spaces)
    std::getline(std::cin, answer);

    // Convert the user's answer to lowercase and compare with "paris"
    if (toLower(answer) == "paris") {
        // If it matches, tell the user they are correct
        std::cout << "Correct! Well done." << std::endl;
    } else {
        // If it does not match, tell the user they are wrong
        std::cout << "Incorrect. The correct answer is Paris." << std::endl;
    }

    // Add a blank line before the advanced quiz
    std::cout << std::endl;

    // =====================================
    // PART 2 (Advanced): Capitals quiz
    // =====================================
    // We will ask several questions, e.g.
    //  "What is the capital of Germany?"
    //  "What is the capital of Spain?"
    // and so on.

    // Number of questions in the quiz
    const int NUM_QUESTIONS = 10;

    // Array of European countries
    std::string countries[NUM_QUESTIONS] = {
        "France",
        "Germany",
        "Italy",
        "Spain",
        "United Kingdom",
        "Belgium",
        "Netherlands",
        "Portugal",
        "Austria",
        "Greece"
    };

    // Matching array of the correct capitals
    // (all stored in lowercase to make comparison easy)
    std::string capitals[NUM_QUESTIONS] = {
        "paris",
        "berlin",
        "rome",
        "madrid",
        "london",
        "brussels",
        "amsterdam",
        "lisbon",
        "vienna",
        "athens"
    };

    // Variable to store the user's answer for each quiz question
    std::string userAnswer;

    // Variable to count how many questions the user gets correct
    int score = 0;

    // Print a title for the quiz
    std::cout << "=== European Capitals Quiz ===" << std::endl;

    // Loop through each question in the quiz
    for (int i = 0; i < NUM_QUESTIONS; ++i) {
        // Ask the user for the capital of the current country
        std::cout << "What is the capital of " << countries[i] << "? ";

        // Make sure we read a full line as the answer
        std::getline(std::cin, userAnswer);

        // Compare the lowercase version of the user's answer
        // with the stored correct capital (also lowercase)
        if (toLower(userAnswer) == capitals[i]) {
            // If they match, the answer is correct
            std::cout << "Correct!" << std::endl;
            // Increase score by 1
            ++score;
        } else {
            // If they do not match, the answer is wrong
            std::cout << "Wrong. The correct answer is ";

            // Print the capital with the first letter uppercase
            // and the rest the same (e.g. "paris" -> "Paris")
            if (!capitals[i].empty()) {
                // First letter uppercase
                char first = static_cast<char>(
                    std::toupper(static_cast<unsigned char>(capitals[i][0]))
                );
                // Rest of the word (from index 1 onwards)
                std::string rest = capitals[i].substr(1);

                std::cout << first << rest;
            }

            std::cout << "." << std::endl;
        }
    }

    // After all questions, show the final score
    std::cout << std::endl; // blank line for spacing
    std::cout << "You scored " << score << " out of " << NUM_QUESTIONS << "." << std::endl;

    // Return 0 to show the programme ended successfully
    return 0;
}