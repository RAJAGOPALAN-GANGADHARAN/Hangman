#include <iostream>
#include "hangman.h"

void intro();
void clearScrn();

int main()
{
    Hangman game;
    clearScrn();
    intro();
    clearScrn();
    game.displayUI();
    
    char userGuess;
    while (!(game.isGameWon() || game.isGameLost())){
        do{
        std::cout << "\nGuess a letter.\n" 
                  << ">  ";
        std::cin >> userGuess;
        }while(!isalnum(userGuess));
        game.guessLetter(userGuess);
        clearScrn();
        game.displayUI();
    }

    if (game.isGameWon()){
        std::cout << "Congratulations, you've won the game!\n";
    } else {
        std::cout << "Ouch, you've hung the man. Better luck next time.\n";
    }
    return 0;
}

void intro(){
    std::cout << "\t\tWelcome to Hangman!\n"
              << "\t\tAuthor: Jacob Bickle\n\n"
              << "\t\tPress any key to contine...\n";
    std::cin.get();
}

void clearScrn(){
    std::cout << std::string(100, '\n');
}

