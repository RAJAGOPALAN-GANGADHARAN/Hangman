/*
*---------*
|         |
| H  S  T |       <- Example of letter box
|         |
|---------|
*/

#ifndef HANGMANUI_H
#define HANGMANUI_H

#include "board.h"
#include <iomanip>

class HangmanUI{

public:
    //TODO: void display();
    void displayLetterBox(const char* letters);
    void displayLetterBox(const char* letters, const unsigned int &letterAmount);

    //TODO: Complete this once board and letterbox are fleshed out
    friend std::ostream& operator<<(std::ostream &os, const HangmanUI &ui);

private:
    Board board;
    // Letterbox letterBox;

};

#endif
