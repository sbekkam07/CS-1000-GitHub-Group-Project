#include <iostream>
using namespace std;

int main() {
    int secretNumber = 7;   // Variable 1: The number to guess
    int guess;              // Variable 2: The player's guess
    int attempts = 3;       // Variable 3: Number of attempts allowed

    cout << "Welcome to the Guessing Game!" << endl;
    cout << "You have " << attempts << " attempts to guess the secret number (1-10)." << endl;

    for (int i = 0; i < attempts; i++) {  // The for loop
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number!" << endl;
            return 0; // Exit the program if the user guesses correctly
        } else {
            cout << "Wrong guess. Try again!" << endl;
        }
    }

    // week 8 test adding stuff to commit 

    cout << "Sorry, you've run out of attempts. The secret number was " << secretNumber << "." << endl;
    return 0;
}
