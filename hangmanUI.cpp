#include "hangmanUI.h"

//void HangmanUI::display(){
    //std::cout << *this;
//}

void HangmanUI::displayLetterBox(const std::vector<char> letters){
    unsigned int totalWrongLetters = letters.size();
    unsigned int sizeBetweenBorders; 

    if (totalWrongLetters < 3){
        sizeBetweenBorders = 9;
    }
    else{
    // Each letter takes up 3 cols of space, the letter itself, 
    // and a space on both sides
        sizeBetweenBorders = totalWrongLetters * 3 + 1;
    }

    // Upper half
    std::cout << '*' << std::setw(sizeBetweenBorders) << std::setfill('-') 
              << '*' << std::endl
              << '|' << std::setw(sizeBetweenBorders) << std::setfill(' ') 
              << '|' << std::endl
              << '|';
    // Letters
    for (unsigned int i = 0; i < totalWrongLetters; i++){
        std::cout << ' ' << letters[i] << ' ';
    }

    std::cout << '|' << std::endl;

    // Lower half
    std::cout << '|' << std::setw(sizeBetweenBorders) << std::setfill(' ') 
              << '|' << std::endl
              << '*' << std::setw(sizeBetweenBorders) << std::setfill('-') 
              << '*';
}

//TODO: Complete this once board and letterbox are fleshed out
std::ostream& operator<<(std::ostream &os, const HangmanUI &ui){
    std::cout << ui.board; // << ui.letterBox
    return os;
}
