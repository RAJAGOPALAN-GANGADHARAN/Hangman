#include "hangmanUI.h"

//void HangmanUI::display(){
    //std::cout << *this;
//}

void HangmanUI::displayLetterBox(const char* letters){
    unsigned int size;
    size = sizeof(letters) / sizeof(letters[0]);

    displayLetterBox(letters, size);
}

void HangmanUI::displayLetterBox(const char* letters,
                                 const unsigned int &letterAmount){
    // Each letter takes up 3 cols of space, the letter itself, and a space on both sides
    unsigned int sizeBetweenBorders = letterAmount * 3 + 1;

    // Upper half
    std::cout << '*' << std::setw(sizeBetweenBorders) << std::setfill('-') 
              << '*' << std::endl
              << '|' << std::setw(sizeBetweenBorders) << std::setfill(' ') 
              << '|' << std::endl
              << '|';
    // Letters
    for (unsigned int i = 0; i < letterAmount; i++){
        std::cout << ' ' << letters[i] << ' ';
    }

    std::cout << '|' << std::endl;

    // Lower half
    std::cout << '|' << std::setw(sizeBetweenBorders) << std::setfill(' ') 
              << '|' << std::endl
              << '*' << std::setw(sizeBetweenBorders) << std::setfill('-') 
              << '*';
}

std::ostream& operator<<(std::ostream &os, const HangmanUI &ui){
    std::cout << ui.board; // << ui.letterBox
    return os;
}
