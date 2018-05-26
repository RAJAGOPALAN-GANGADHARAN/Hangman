#ifndef HANGMAN_H
#define HANGMAN_H

#include "randomWord.h"
#include "hangman.h"

class Hangman{
public:

private:

    unsigned int const totalWrongAttempts = 7;
    unsigned int wrongAttempts = 0;
    RandomWord targetPhrase;
    HangmanUI ui;
};

#endif

