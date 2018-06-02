#include "hangman.h"

Hangman::Hangman(){
    RandomWord randomWord;
    Hangman(randomWord.getWord());
}

Hangman::Hangman(std::string targetPhrase)
    : targetPhrase(targetPhrase){

    std::transform(targetPhrase.begin(), targetPhrase.end(), 
                   targetPhrase.begin(), ::tolower);
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
    

void Hangman::guessLetter(const char& guessedLetter){
    std::set<char>::iterator correctLetterIterator;

    for (correctLetterIterator = lettersInTargetPhrase.begin();
            correctLetterIterator != lettersInTargetPhrase.end();
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

//TODO: Work in progress
//void Hangman::updateUI(){
    //ui.setIncorrectLetters(&lettersGuessedIncorrectly);
//}
