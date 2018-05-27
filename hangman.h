#ifndef HANGMAN_H
#define HANGMAN_H

#include "randomWord.h"
#include "hangmanUI.h"

class Hangman{
public:
    void incrementWrongAttempts();
    const bool& isGameLost();

private:
    unsigned int const TOTAL_WRONG_ATTEMPTS = 7;
    unsigned int wrongAttempts = 0;
    bool playerLost = false;

    RandomWord targetPhrase;
    HangmanUI ui;
};

#endif

