#ifndef HANGMAN_H
#define HANGMAN_H

#include "randomWord.h"
//#include "hangmanUI.h"  // UI is disabled until working version of game is running
#include <string> 
#include <set>
#include <algorithm>  // std::transform 
#include <locale>  // std::tolower, std::locale

class Hangman{
public:
    Hangman();
    Hangman(std::string targetPhrase);
    
    // Needs testing
    // what if someone guesses ''?
    void guessLetter(char guessedLetter);
    bool hasLetterBeenGuessed(const char& guessedLetter) const;

    //TODO: 
    bool isGameLost();
    //Needs testing
    bool isGameWon();

    // Commented out until working version of game is running
    //void updateUI();
    //void displayUI();

    // TODO: Unnecissary friend function, but useful for class. Better way
    // to implement this?
    friend bool isCharInSet(const char& ch, const std::set<char>& container);

private:
    /* TOTAL_WRONG_ATTEMPTS = 7 because Hangman only has 7 limbs to attach,
    including the rope. */
    unsigned int const TOTAL_WRONG_ATTEMPTS = 7;  
    unsigned int wrongAttempts = 0;
    std::string targetPhrase;                     // Lower case only
    std::set<char> lettersInTargetPhrase;         // Lower case only
    std::set<char> lettersGuessedIncorrectly;     // Lower case only
    std::set<char> lettersGuessedCorrectly;       // Lower case only
    //HangmanUI ui;
};

#endif

