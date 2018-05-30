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
    
    void guessLetter(const char& letter);

    void incrWrongAttempts();
    const bool& isGameLost();
    const bool& isGameWon();

    std::set<char>& getIncorrectLetters();
    std::set<char>& getCorrectLetters();

    void updateUI();
    void displayUI();

private:
    unsigned int const TOTAL_WRONG_ATTEMPTS = 7;
    unsigned int wrongAttempts = 0;
    std::string targetPhrase;
    //TODO: UI will point to lettersGuessedIncorrectly and lettersGussedCorrectly 
    std::set<char> lettersGuessedIncorrectly;
    std::set<char> lettersGuessedCorrectly;
    HangmanUI ui;
};

#endif

