#ifndef HANGMANUI_H
#define HANGMANUI_H
#include <array>

struct Point{
    int x;
    int y;
};

class HangmanUI{

public:

    //TODO: Add as member of Game
    //TODO: Rename these functions
    void addLimb();  // Adds limb to hangman output stream and increments

    // Operator overload
    friend std::ostream& operator <<(std::ostream& os,
                                    const HangmanUI& hgMnUI);

private:
    
    // Private methods
    void replaceCharOnBoard(char ch, Point coord); 
    
    // Attributes
    unsigned int limbsAttached = 0;

    const Point HEAD_COORD = {3, 6};
    const char HEAD = 'o';

    const Point ROPE_COORD = {2, 6}; 
    const Point TORSO_COORD = {4, 6};
    const char TORSO = '|';

    const Point LEFT_ARM_COORD = {4, 5};
    const Point RIGHT_ARM_COORD = {4, 7};
    const char ARM = '-';

    const Point LEFT_LEG_COORD = {5, 5};
    const char LEFT_LEG = '/';

    const Point RIGHT_LEG_COORD = {5, 7};
    const char RIGHT_LEG = '\\';

    // The top left is {0, 0}
    char board[9][13] = 
    {{' ', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', ' '},
     {' ', '|', '.', '_', '_', '_', '_', '_', '_', '_', '.', '|', ' '},
     {' ', '|', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', '|', ' '},
     {' ', '|', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', '|', ' '},
     {' ', '|', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', '|', ' '},
     {' ', '|', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', '|', ' '},
     {' ', '|', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', '|', ' '},
     {'_', '|', '|', '_', '_', '_', '_', '_', '_', '_', '|', '|', '_'},
     {' ', '|', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', '|', ' '}};

};

#endif
