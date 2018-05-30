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
#include <vector>

class HangmanUI{

public:
    //TODO: void display();
    void displayLetterBox(const std::vector<char> letters);
    void displayBoard();
    void setIncorrectLetters(std::vector<char> &incorrectLetters);

    //TODO: Complete this once board and letterbox are fleshed out
    friend std::ostream& operator<<(std::ostream &os, const HangmanUI &ui);

private:
    //TODO: This points to the incorrectLetters from somewhere else
    std::vector<char>* incorrectLetters;
    Board board;

};

#endif
