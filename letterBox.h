#ifndef LETTERBOX_H
#define LETTERBOX_H

#include <iostream>
#include <iomanip>

class LetterBox{
public:

    //TODO: Fix determining size 
    void displayLetters(const char* letters);
    void displayLetters(const char* letters, const unsigned int &letterAmount);
};

#endif
