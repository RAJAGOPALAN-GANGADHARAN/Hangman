#include "hangman.h"

Hangman::Hangman(){
    RandomWord randomWord;
    this->targetPhrase = randomWord.getWord();
}

Hangman::Hangman(std::string targetPhrase)
    : targetPhrase(targetPhrase) {}

void Hangman::guessLetter(const char& guessedLetter){
    std::set<char>::iterator correctLetterIterator;

    //TODO: Check if letter has already been guessed
    
    for (correctLetterIterator = allCorrectLetters.begin();
            correctLetterIterator != allCorrectLetters.end();
            correctLetterIterator++){
        if (guessedLetter == *correctLetterIterator){
            lettersGuessedCorrectly.insert(guessedLetter);
            return;
        }
    }

    lettersGuessedIncorrectly.insert(guessedLetter);
}


