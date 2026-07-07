// ===============================================
// For Loop Practice Programme
// ===============================================
// Tasks:
// 1) Count up from 0 to 50 in steps of 1
// 2) Count down from 50 to 0 in steps of 1
// 3) Count up from 30 to 50 in steps of 1
// 4) Count down from 50 to 10 in steps of 2
// 5) Count up from 100 to 200 in steps of 5
// All values are printed to the console.
// ===============================================

#include <iostream>  // lets us use std::cout

int main() {

    // -------------------------------------------
    // 1) Loop that counts up from 0 to 50 by 1
    // -------------------------------------------
    std::cout << "Loop 1: Count up from 0 to 50 by 1\n";

    // for (start; condition; change each time)
    for (int i = 0; i <= 50; i++) {
        // i starts at 0
        // while i is less than or equal to 50, the loop runs
        // after each run, i++ adds 1 to i
        std::cout << i << std::endl;
    }

    std::cout << std::endl;  // blank line between loops

    // -------------------------------------------
    // 2) Loop that counts down from 50 to 0 by 1
    // -------------------------------------------
    std::cout << "Loop 2: Count down from 50 to 0 by 1\n";

    for (int i = 50; i >= 0; i--) {
        // i starts at 50
        // while i is greater than or equal to 0, the loop runs
        // after each run, i-- subtracts 1 from i
        std::cout << i << std::endl;
    }

    std::cout << std::endl;

    // -------------------------------------------
    // 3) Loop that counts up from 30 to 50 by 1
    // -------------------------------------------
    std::cout << "Loop 3: Count up from 30 to 50 by 1\n";

    for (int i = 30; i <= 50; i++) {
        // i starts at 30
        // keeps going until it reaches 50
        // goes up by 1 each time
        std::cout << i << std::endl;
    }

    std::cout << std::endl;

    // -------------------------------------------
    // 4) Loop that counts down from 50 to 10 by 2
    // -------------------------------------------
    std::cout << "Loop 4: Count down from 50 to 10 by 2\n";

    for (int i = 50; i >= 10; i -= 2) {
        // i starts at 50
        // keeps going as long as i is >= 10
        // i -= 2 means: i = i - 2 (subtract 2 each time)
        std::cout << i << std::endl;
    }

    std::cout << std::endl;

    // -------------------------------------------
    // 5) Loop that counts up from 100 to 200 by 5
    // -------------------------------------------
    std::cout << "Loop 5: Count up from 100 to 200 by 5\n";

    for (int i = 100; i <= 200; i += 5) {
        // i starts at 100
        // keeps going until i is 200
        // i += 5 means: i = i + 5 (add 5 each time)
        std::cout << i << std::endl;
    }

    std::cout << std::endl;

    // End of programme
    return 0;
}