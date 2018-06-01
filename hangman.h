#ifndef HANGMAN_H
#define HANGMAN_H

#include "randomWord.h"
#include "hangmanUI.h"
#include <string> 
#include <set>

class Hangman{
public:
    Hangman();
    Hangman(std::string targetPhrase);
    
    // Needs testing
    void guessLetter(const char& guessedLetter);
    bool hasLetterBeenGuessed(const char& guessedLetter) const;

    //TODO: 
    const bool& isGameLost();
    const bool& isGameWon();

    void updateUI();
    void displayUI();

    friend bool isCharInSet(const char& ch, const std::set<char>& container);

private:
    unsigned int const TOTAL_WRONG_ATTEMPTS = 7;
    unsigned int wrongAttempts = 0;
    std::string targetPhrase;
    std::set<char> allCorrectLetters;
    //TODO: UI will point to lettersGuessedIncorrectly and lettersGussedCorrectly 
    std::set<char> lettersGuessedIncorrectly;
    std::set<char> lettersGuessedCorrectly;
    HangmanUI ui;
};

#endif

