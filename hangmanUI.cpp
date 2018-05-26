#include "hangmanUI.h"

// TODO: Perhaps a linked list would be better
void HangmanUI::addLimb(){

    switch(limbsAttached){
        case(0):
            replaceCharOnBoard(TORSO, ROPE_COORD);
            return;
        case(1):
            replaceCharOnBoard(HEAD, HEAD_COORD);
            return;
        case(2):
            replaceCharOnBoard(TORSO, TORSO_COORD);
            return;
        case(3):
            replaceCharOnBoard(ARM, LEFT_ARM_COORD);
            return;
        case(4):
            replaceCharOnBoard(ARM, RIGHT_ARM_COORD);
            return;
        case(5):
            replaceCharOnBoard(LEFT_LEG, LEFT_LEG_COORD);
            return;
        case(6):
            replaceCharOnBoard(RIGHT_LEG, RIGHT_LEG_COORD);
            return;
        default:
            return;
            // TODO: Throw error
    }
}

void HangmanUI::replaceCharOnBoard(char ch, Point coord)
{
    int x = coord.x;
    int y = coord.y;
    board[x][y] = ch;
}

