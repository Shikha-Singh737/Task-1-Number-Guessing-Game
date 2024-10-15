//TASK 1 : NUMBER GUESSING GAME

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); // Seed the random number generator
    int numberToGuess = std::rand() % 100 + 1; // Generate a random number between 1 and 100
    int userGuess = 0;

    std::cout << "Guess the number between 1 and 100: ";

    while (userGuess != numberToGuess) {
        std::cin >> userGuess;

        if (userGuess < numberToGuess) {
            std::cout << "Too low! Try again: ";
        } else if (userGuess > numberToGuess) {
            std::cout << "Too high! Try again: ";
        } else {
            std::cout << "Congratulations! You guessed the correct number: " << numberToGuess << std::endl;
        }
    }

    return 0;
}

