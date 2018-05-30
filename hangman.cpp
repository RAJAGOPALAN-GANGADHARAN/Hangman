#include "hangman.h"

Hangman::Hangman(){
    RandomWord randomWord;
    this->targetPhrase = randomWord.getWord();
}

Hangman::Hangman(std::string targetPhrase)
    : targetPhrase(targetPhrase) {}

void Hangman::guessLetter(const char& guessedLetter){
    std::set<char>::iterator correctLetterIterator;

    for (correctLetterIterator = allCorrectLetters.begin();
            correctLetterIterator != allCorrectLetters.end();
            correctLetterIterator++){
        if (guessedLetter == *correctLetterIterator){
            lettersGuessedCorrectly.insert(guessedLetter);
            return;
        }
    }

    lettersGuessedIncorrectly.insert(guessedLetter);
    wrongAttempts++;
}

bool isCharInSet(const char& ch, const std::set<char>& container){
    std::set<char>::iterator containerIterator;
    containerIterator = container.find(ch);
    return !(containerIterator == container.end());
}

bool Hangman::hasLetterBeenGuessed(const char& guessedLetter) const {
    return (isCharInSet(guessedLetter, lettersGuessedCorrectly) &&
            isCharInSet(guessedLetter, lettersGuessedIncorrectly));
}

std::set<char>& Hangman::getLettersGuessedIncorrectly(){
    return lettersGuessedIncorrectly; 
}

std::set<char>& Hangman::getLettersGuessedCorrectly(){
    return lettersGuessedCorrectly;
}
