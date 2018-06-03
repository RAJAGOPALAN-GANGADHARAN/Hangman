#include "hangman.h"

//TODO: This isn't getting a randomWord
Hangman::Hangman(){
    RandomWord randomWord;
    Hangman(randomWord.getWord());
}

Hangman::Hangman(std::string targetPhrase)
    : targetPhrase(targetPhrase){

    std::transform(this->targetPhrase.begin(), this->targetPhrase.end(), 
                   this->targetPhrase.begin(), ::tolower);
    //TODO: Check if targetPhrase is alpha characters only
    
    // Populate std::set<char> lettersInTargetPhrase
    std::string::iterator targetPhraseIT;
    char* currentLetter;

    for (targetPhraseIT = targetPhrase.begin();
         targetPhraseIT != targetPhrase.end();
         targetPhraseIT++)
    {
        currentLetter = &*targetPhraseIT;
        lettersInTargetPhrase.insert(*currentLetter);
    }
}

bool isCharInSet(const char& ch, const std::set<char>& container){
    std::set<char>::iterator containerIterator;
    containerIterator = container.find(ch);
    return !(containerIterator == container.end());
}   

void Hangman::guessLetter(const char& guessedLetter){
    std::set<char>::iterator correctLetterIterator;

    if (isCharInSet(guessedLetter, lettersInTargetPhrase)){
        lettersGuessedCorrectly.insert(guessedLetter);
    } else {
        lettersGuessedIncorrectly.insert(guessedLetter);
        wrongAttempts++;
    }
}



bool Hangman::hasLetterBeenGuessed(const char& guessedLetter) const {
    return (isCharInSet(guessedLetter, lettersGuessedCorrectly) &&
            isCharInSet(guessedLetter, lettersGuessedIncorrectly));
}

//TODO: Work in progress
//void Hangman::updateUI(){
    //ui.setIncorrectLetters(&lettersGuessedIncorrectly);
//}
