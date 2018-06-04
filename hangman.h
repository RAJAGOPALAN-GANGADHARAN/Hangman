#ifndef HANGMAN_H
#define HANGMAN_H

#include "randomWord.h"
#include "hangmanUI.h" 
#include <string>        // targetPhrase
#include <set>           // Primary data structure
#include <algorithm>     // std::transform // Use tolower in cctype instead
#include <cctype>        // std::isAlpha
#include <locale>        // std::tolower, std::locale

class Hangman{
public:
    Hangman();
    Hangman(std::string targetPhrase);
    
    void guessLetter(char guessedLetter);
    bool hasLetterBeenGuessed(const char& guessedLetter) const;

    //TODO: 
    bool isGameLost();
    //Needs testing
    bool isGameWon();

    // Commented out until working version of game is running
    void updateUI();
    void displayUI();

    // TODO: Unnecissary friend function, but useful for class. Better way
    // to implement this?

private:
    /* TOTAL_WRONG_ATTEMPTS = 7 because Hangman only has 7 limbs to attach,
    including the rope. */
    unsigned int const TOTAL_WRONG_ATTEMPTS = 7;  
    unsigned int wrongAttempts = 0;
    std::string targetPhrase;                     // Lower case only
    std::set<char> lettersInTargetPhrase;         // Lower case alpha only
    std::set<char> lettersGuessedIncorrectly;     // Lower case alpha only
    std::set<char> lettersGuessedCorrectly;       // Lower case alpha only
    HangmanUI ui;
};

#endif

