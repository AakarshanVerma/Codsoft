#include <iostream>   
// Library for input/output operations
#include <cstdlib>  
  // Library for standard general utilities
#include <ctime> 
     // Library for functions to work with date and time

using namespace std;

int main() {
    srand(time(0)); 
    // Seed for random number generation using current time
    int secretNumber = rand() % 100 + 1; 
    // Generate random number between 1 and 100
    int guess;
     // Variable to store user's guess
    int attempts = 0; 
    // Variable to count the number of attempts

    cout << "Welcome to the Guessing Game!\n\n"; 
    // Print welcome message
    cout << "I have chosen a number between 1 and 100. Can you guess what it is?\n\n"; 
    // Prompt the user to guess

    do {
        cout << "Enter your guess: "; 
        // Prompt user to enter a guess
        cin >> guess;
         // Read user's guess
        attempts++;
         // Increment the attempt count

        if (guess > secretNumber) { 
            // Check if guess is greater than the secret number
            cout << "Too high! Try again.\n\n"; // Inform user that the guess is too high
        } else if (guess < secretNumber) { 
            // Check if guess is less than the secret number
            cout << "Too low! Try again.\n\n";
             // Inform user that the guess is too low
        } else { // If guess is correct
            cout << "\nCongratulations! You guessed the number " << secretNumber << " correctly!\n"; 
            // Congratulate the user
            cout << "It took you " << attempts << " attempts to guess the correct number.\n"; 
            // Display the number of attempts
        }
    } while (guess != secretNumber); 
    // Repeat until the guess is correct

    return 0;
}
