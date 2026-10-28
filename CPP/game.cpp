
include<iostream>
#include <random>
#include <chrono>
#include <limits>

int main() {
    // Random engine seeded with current time
    std::mt19937 rng(static_cast<unsigned>(std::chrono::steady_clock::now().time_since_epoch().count()));

    std::cout << "Guess the Number (console)\n";

    bool play = true;
    while (play) {
        // Secret number between 1 and 100
        std::uniform_int_distribution<int> dist(1, 100);
        int secret = dist(rng);
        int attempts = 0;
        int guess = 0;

        std::cout << "I'm thinking of a number between 1 and 100. Try to guess it!\n";

        while (true) {
            std::cout << "Enter your guess: ";
            if (!(std::cin >> guess)) {
                // handle non-integer input
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Please enter a valid integer.\n";
                continue;
            }

            attempts++;

            if (guess < secret) {
                std::cout << "Too low.\n";
            } else if (guess > secret) {
                std::cout << "Too high.\n";
            } else {
                std::cout << "Correct! You took " << attempts << " attempt" << (attempts == 1 ? "" : "s") << ".\n";
                break;
            }
        }

        // Ask to play again
        char choice = 'n';
        std::cout << "Play again? (y/n): ";
        std::cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            play = true;
            // flush leftover input
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            play = false;
        }
    }

    std::cout << "Thanks for playing!\n";
    return 0;
}
