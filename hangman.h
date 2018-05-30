#ifndef HANGMAN_H
#define HANGMAN_H

#include "randomWord.h"
#include "hangmanUI.h"
#include <string> 

class Hangman{
public:
    Hangman();

    void incrementWrongAttempts();
    const bool& isGameLost();

private:
    unsigned int const TOTAL_WRONG_ATTEMPTS = 7;
    unsigned int wrongAttempts = 0;
    bool playerLost = false;
    std::vector<char> incorrectLetters;

    std::string targetPhrase;
    HangmanUI ui;
};

#endif

