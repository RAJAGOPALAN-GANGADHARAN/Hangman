#include <iostream>
#include "hangman.h"

int main()
{
    Hangman game("zeBrA");
    std::cout << "Welcome to hangman v 0.5!\n";
    
    char userGuess;
    while (!(game.isGameWon() || game.isGameLost())){
        std::cout << "Guess a letter.\n" 
                  << ">  ";
        std::cin >> userGuess;

        game.guessLetter(userGuess);
        std::cout << "\nUnfortunetly, the game's UI is not up and running at the moment. Therefore, I cannot tell you whether that is correct or not.\n";
    }

    if (game.isGameWon()){
        std::cout << "Congratulations, you've won the game!\n";
    } else {
        std::cout << "Ouch, you've hung the man. Better luck next time.\n";
    }
    return 0;
}

