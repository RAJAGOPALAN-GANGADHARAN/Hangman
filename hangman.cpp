#include "hangman.h"
#include<iostream>
//TODO: This isn't getting a randomWord
Hangman::Hangman(){
    RandomWord randomWord;
    setPhrase(randomWord.getWord());
}
void Hangman::setPhrase(std::string set)
{
    std::transform(this->targetPhrase.begin(), this->targetPhrase.end(), 
                   this->targetPhrase.begin(), ::tolower);
    for (char currentLetter : set)
    {
        currentLetter = std::tolower(currentLetter);

        if (std::isalpha(static_cast<unsigned char>(currentLetter))){
            lettersInTargetPhrase.insert(currentLetter);
        }
    }
    ui.setTargetPhrase(this->targetPhrase);
}
static bool isCharInSet(const char& ch, const std::set<char>& container){
    std::set<char>::iterator containerIterator;
    containerIterator = container.find(ch);
    return !(containerIterator == container.end());
}   

void Hangman::guessLetter(char guessedLetter){
    guessedLetter = std::tolower(guessedLetter, std::locale());

    //TODO: Try-catch letters
    try{ 
        filterGuessedLetter(guessedLetter);
    } catch (const char* msg) {
        // Do something with this
        // Need to display the error to user
        return;
    }

    operateOnLetter(guessedLetter);
    updateUI();
}

bool Hangman::hasLetterBeenGuessed(const char& guessedLetter) const {
    return (isCharInSet(guessedLetter, lettersGuessedCorrectly) ||
            isCharInSet(guessedLetter, lettersGuessedIncorrectly));
}

bool Hangman::isGameLost(){
    return wrongAttempts >= TOTAL_WRONG_ATTEMPTS;
}

bool Hangman::isGameWon(){
    return lettersInTargetPhrase == lettersGuessedCorrectly;
}

//TODO: Work in progress
void Hangman::updateUI(){
    ui.setIncorrectlyGuessedLetters(lettersGuessedIncorrectly);
    ui.setCorrectlyGuessedLetters(lettersGuessedCorrectly);
}

void Hangman::displayUI(){
    ui.displayBoard(); 
    std::cout << std::endl;
    std::cout << "--Incorrect letters--\n";
    ui.displayLetterBox(); //  TODO: Complete
    std::cout << std::endl;
    ui.displayPuzzle();  
    std::cout << std::endl;
}


void Hangman::filterGuessedLetter(const char& guessedLetter){
    if (hasLetterBeenGuessed(guessedLetter)){
        throw "Letter has been guessed.";  // Can it throw ui.repeatedLetterError()?
    } 
    else if (!(isalpha(guessedLetter))){
        throw "That is not a letter.";
    }
}

void Hangman::operateOnLetter(const char& letter){
    if (isCharInSet(letter, lettersInTargetPhrase)){
        lettersGuessedCorrectly.insert(letter);
    } else {
        lettersGuessedIncorrectly.insert(letter);
        ++wrongAttempts;
        ui.attachLimb();
    }
}

