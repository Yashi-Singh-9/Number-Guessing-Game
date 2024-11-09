#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Function to start the game
void playGame(int maxAttempts, int correctNumber) {
    int guess;
    int attempts = 0;
    auto startTime = high_resolution_clock::now();  // Start the timer

    while (attempts < maxAttempts) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == correctNumber) {
            auto endTime = high_resolution_clock::now();  // End the timer
            auto duration = duration_cast<seconds>(endTime - startTime);  // Calculate time taken

            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
            cout << "It took you " << duration.count() << " seconds to guess the number.\n";
            return;  // End the game
        } else if (guess < correctNumber) {
            cout << "Incorrect! The number is greater than " << guess << ".\n";
        } else {
            cout << "Incorrect! The number is less than " << guess << ".\n";
        }
    }

    cout << "Sorry, you've run out of attempts! The correct number was " << correctNumber << ".\n";
}

// Function to start a new round of the game
void startNewRound() {
    int difficultyChoice;
    int maxAttempts;
    int correctNumber = rand() % 100 + 1;  // Random number between 1 and 100

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I'm thinking of a number between 1 and 100.\n";
    
    // Difficulty selection
    cout << "Please select the difficulty level:\n";
    cout << "1. Easy (10 chances)\n";
    cout << "2. Medium (5 chances)\n";
    cout << "3. Hard (3 chances)\n";
    cout << "Enter your choice: ";
    cin >> difficultyChoice;

    switch (difficultyChoice) {
        case 1:
            maxAttempts = 10;
            cout << "Great! You have selected the Easy difficulty level.\n";
            break;
        case 2:
            maxAttempts = 5;
            cout << "Great! You have selected the Medium difficulty level.\n";
            break;
        case 3:
            maxAttempts = 3;
            cout << "Great! You have selected the Hard difficulty level.\n";
            break;
        default:
            cout << "Invalid choice, defaulting to Medium difficulty.\n";
            maxAttempts = 5;
            break;
    }

    cout << "Let's start the game!\n";
    playGame(maxAttempts, correctNumber);
}

int main() {
    srand(static_cast<unsigned int>(time(0)));  // Seed for random number generation

    char playAgain;
    do {
        startNewRound();

        cout << "Would you like to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing! Goodbye!\n";
    return 0;
}
