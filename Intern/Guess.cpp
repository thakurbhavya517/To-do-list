#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()

using namespace std;

int main() {
    srand(time(0)); // Seed random number generator

    int r = rand() % 100 + 1; // Random number between 1 and 100 is chosen
    int guess;

    cout << "I've chosen a number between 1 and 100.\nCan you guess what it is?\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > r) {
            cout << "Too high! Try again.\n";
        } 
        else if (guess < r) {
            cout << "Too low! Try again.\n";
        } 
        else {
            cout << "Congratulations! You guessed it right.\n";
        }

    } while (guess != r);

    return 0;
}
