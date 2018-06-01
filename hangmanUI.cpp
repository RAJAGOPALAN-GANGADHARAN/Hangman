#include "hangmanUI.h"

//void HangmanUI::display(){
    //std::cout << *this;
//}

void HangmanUI::displayLetterBox(){
    
    unsigned int totalWrongLetters = letters->size();
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

void HangmanUI::setLetters(std::set<char>* letters){
    
}

//TODO: Complete this once board and letterbox are fleshed out
std::ostream& operator<<(std::ostream &os, const HangmanUI &ui){
    return os;
}

void HangmanUI::displayLettersInBox(const char DELIM){
    std::set<char>::iterator lettersIterator;

    for (lettersIterator = letters->begin(); lettersIterator != letters->end();
           lettersIterator++){ 
        std::cout << DELIM << *lettersIterator << DELIM;
    }
}
