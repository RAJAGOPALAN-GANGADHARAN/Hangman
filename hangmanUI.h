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
#include <set>

class HangmanUI{

public:
    //TODO: void display();
    void displayLetterBox();
    void displayBoard();
    void setLetters(std::set<char>* letters);

    //TODO: Complete this once board and letterbox are fleshed out
    friend std::ostream& operator<<(std::ostream &os, const HangmanUI &ui);

private:
    void displayLettersInBox(const char DELIM = ' ');

    std::set<char>* letters;
    Board board;

};

#endif
