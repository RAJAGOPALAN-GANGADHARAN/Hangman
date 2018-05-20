#ifndef HANGMANILLUSTRATION_H
#define HANGMANILLUSTRATION_H

#include <array>

struct Point{
    int x;
    int y;
};

class HangmanIllustration{

public:

    //TODO: Add as member of Game
    //TODO: Rename these functions
    void addLimb();  // Adds limb to hangman output stream and increments
    void incrementLimbsAttached();  

    // Operator overload
    friend std::ostream& operator <<(std::ostream& os,
                                    const HangmanIllustration& hgMnIlus);

private:
    
    // Private methods
    void replaceCharIn2DArray(char ch, Point coord); 
    
    // Attributes
    unsigned int limbsAttached = 0;

    const Point HEAD_COORD = {3, 6};
    const char HEAD = 'o';

    const Point BODY_COORD = {4, 6};
    const char BODY = '|';

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
     {' ', '|', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', '|', ' '},
     {' ', '|', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', '|', ' '},
     {' ', '|', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', '|', ' '},
     {' ', '|', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', '|', ' '},
     {' ', '|', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', '|', ' '},
     {'_', '|', '|', '_', '_', '_', '_', '_', '_', '_', '|', '|', '_'},
     {' ', '|', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', '|', ' '}};

};

#endif
