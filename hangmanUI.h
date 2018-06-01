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
    void displayLetterBox(const std::set<char>& letters);
    void displayBoard();
    void setIncorrectLetters(std::set<char>& incorrectLetters);

    //TODO: Complete this once board and letterbox are fleshed out
    friend std::ostream& operator<<(std::ostream &os, const HangmanUI &ui);

private:
    //TODO: This points to the incorrectLetters from somewhere else
    std::set<char>* incorrectLetters;
    Board board;

};

#endif
