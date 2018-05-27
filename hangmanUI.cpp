#include "hangmanUI.h"

void HangmanUI::displayUI(){
    std::cout << *this;
}

std::ostream& operator<<(std::ostream &os, const HangmanUI &ui){
    std::cout << ui.board; // << ui.letterBox
    return os;
}
