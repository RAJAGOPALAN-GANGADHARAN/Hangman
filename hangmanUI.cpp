#include "hangmanUI.h"

//void HangmanUI::display(){
    //std::cout << *this;
//}

// TODO: isCharInSet function was copy pasted from hangman.cpp, find out how to 
//       make it more dry.
static bool isCharInSet(const char& ch, const std::set<char>& container){
    std::set<char>::iterator containerIterator;
    containerIterator = container.find(ch);
    return !(containerIterator == container.end());
}

void HangmanUI::displayPuzzle(){
    // For every letter (not whitespace) in targetPhrase:
    // Print '_' if it's in correctLetters
    std::string::iterator targetPhraseIt;

    for (targetPhraseIt = targetPhrase.begin();
            targetPhraseIt != targetPhrase.end();
            targetPhraseIt++){

        unsigned char currentLetter = *targetPhraseIt;
        if (isalpha(currentLetter)){
            if (isCharInSet(currentLetter, correctlyGuessedLetters)){
                std::cout << (char)std::toupper(currentLetter);        
            } else {
                std::cout << '_';
            }
        } else {
            std::cout << (char)currentLetter;
        }

    std::cout << ' ';
    }
}

void HangmanUI::displayLetterBox(){
    
    unsigned int totalWrongLetters = incorrectlyGuessedLetters.size();
    unsigned int columnsBetweenBorders; 

    // Default box size
    if (totalWrongLetters < 3){
        columnsBetweenBorders = 9;
    }else{
    // Each letter takes up 3 cols of space, the letter itself, 
    // and a space on both sides
        columnsBetweenBorders = totalWrongLetters * 3 + 1;
    }

    // Upper half
    std::cout << '*' << std::setw(columnsBetweenBorders) << std::setfill('-') 
              << '*' << std::endl
              << '|' << std::setw(columnsBetweenBorders) << std::setfill(' ') 
              << '|' << std::endl
              << '|';

    // Letters
    // TODO: Size this correctly with default col space
    displayLettersInBox(); 
    std::cout << '|' << std::endl;

    // Lower half
    std::cout << '|' << std::setw(columnsBetweenBorders) << std::setfill(' ') 
              << '|' << std::endl
              << '*' << std::setw(columnsBetweenBorders) << std::setfill('-') 
              << '*';
}

void HangmanUI::displayBoard(){
    std::cout << this->board;
}

void HangmanUI::attachLimb(){
    board.addNextLimb();
}

//TODO: Complete this once board and letterbox are fleshed out
std::ostream& operator<<(std::ostream &os, const HangmanUI &ui){
    return os;
}

void HangmanUI::displayLettersInBox(const char DELIM){
    std::set<char>::iterator lettersIterator;

    for (lettersIterator = incorrectlyGuessedLetters.begin(); 
            lettersIterator != incorrectlyGuessedLetters.end();
            lettersIterator++){ 
        std::cout << DELIM << *lettersIterator << DELIM;
    }
}

void HangmanUI::setIncorrectlyGuessedLetters(const std::set<char> &letters){
    this->incorrectlyGuessedLetters = letters;
}

void HangmanUI::setTargetPhrase(const std::string &targetPhrase){
    this->targetPhrase = targetPhrase;
}

void HangmanUI::setCorrectlyGuessedLetters(const std::set<char> &letters){
    this->correctlyGuessedLetters = letters;
}

