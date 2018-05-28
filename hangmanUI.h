#ifndef HANGMANUI_H
#define HANGMANUI_H

#include "board.h"

class HangmanUI{

public:
    void displayUI();

    friend std::ostream& operator<<(std::ostream &os, const HangmanUI &ui);

private:
    Board board;
    // Letterbox letterBox;

};

#endif
