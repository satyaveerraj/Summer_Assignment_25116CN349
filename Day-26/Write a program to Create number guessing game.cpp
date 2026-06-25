#include <iostream>
#include <cstdlib>   
#include <ctime>    
using namespace std;

int main() {
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have chosen a number between 1 and 100.\n";
    cout << "Try to guess it!\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        } else if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the number in " 
                 << attempts << " attempts.\n";
        }
    } while (guess != secretNumber);

    return 0;
}

/*
Logic Explanation:
1. Use srand(time(0)) to seed the random number generator.
2. Generate a random number between 1 and 100.
3. Ask the user to guess the number.
4. Compare the guess with the secret number:
   - If guess is higher, show "Too high".
   - If guess is lower, show "Too low".
   - If guess matches, congratulate and show attempts.
5. Repeat until the correct guess is made.
*/
