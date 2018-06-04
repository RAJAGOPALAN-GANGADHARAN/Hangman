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
    void displayPuzzle();
    void displayLetterBox();
    void displayBoard();
    void attachLimb();

    void setTargetPhrase(const std::string &targetPhrase);
    void setIncorrectlyGuessedLetters(const std::set<char> &letters);
    void setCorrectlyGuessedLetters(const std::set<char> &letters);

    //TODO: Complete this once board and letterbox are fleshed out

private:
    void displayLettersInBox(const char DELIM = ' ');

    std::string targetPhrase;
    std::set<char> incorrectlyGuessedLetters;
    std::set<char> correctlyGuessedLetters;
    Board board;

};

#endif
