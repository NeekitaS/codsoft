#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    //  the random number will generator with current time
    srand(static_cast<unsigned int>(time(0)));  //function in cstdlib library

    // Will generate a random number between 1 and 1000
    int randomNo= rand() % 1000 + 1;
    int Guess;
    int attempt= 0;
    cout << "--------------------------------------------HELLO!!Welcome to the Number Guessing Game :)------------------------------------------------\n\n";
    cout << "Try to guess a number between 1 and 1000.\n\n";

    do {
           cout << "Enter your guess:  ";
           cin >>Guess;
           attempt++;

        // Provide feedback based on the user's guess
        if (Guess < randomNo) {
             cout << " \t (- _ -) \a\a\a\a Too low! Try again.\n";
        } else if (Guess > randomNo) {
             cout << " \t (- _ -) \a\a\a\a Too high! Try again.\n";
        } else {
            // User guessed the correct number
             cout << "\t \n\a\a\a\a\a\a  (* o *) CONGRATULATIONS!!  :) You guessed the correct number in "
                      << attempt<< " attempts.\n";
        }

    } while (Guess != randomNo);

    return 0;
}
