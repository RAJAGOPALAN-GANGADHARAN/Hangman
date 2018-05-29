#include "letterBox.h"


void LetterBox::displayLetters(const char* letters){
    unsigned int size;
    size = sizeof(letters) / sizeof(letters[0]);

    displayLetters(letters, size);
}

/*
 
*---------*
|         |
| H  S  T |       <- Example of word box
|         |
|---------|

Contains border
Each letter has one space beside it

Two poles must be added no matter what
The space between them varies
*/
void LetterBox::displayLetters(const char* letters,
                               const unsigned int &letterAmount){
    // Each letter takes up 3 cols of space, the letter itself, and a space on both sides
    unsigned int sizeBetweenBorders = letterAmount* 3;

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

    // Lower half
    std::cout << '|' << std::setw(sizeBetweenBorders) << std::setfill(' ') 
              << '|' << std::endl
              << '*' << std::setw(sizeBetweenBorders) << std::setfill('-') 
              << '*';
}
