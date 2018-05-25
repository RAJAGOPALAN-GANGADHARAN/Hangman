#include "board.h"

void Board::addNextLimb(){
    // Perhaps a linked list would be the best way to do this? Until then...
    limbsAttached++;

    switch(limbsAttached){
        case(1):
            replaceCharOnBoard(TORSO, ROPE_COORD);
            return;
        case(2):
            replaceCharOnBoard(HEAD, HEAD_COORD);
            return;
        case(3):
            replaceCharOnBoard(TORSO, TORSO_COORD);
            return;
        case(4):
            replaceCharOnBoard(ARM, LEFT_ARM_COORD);
            return;
        case(5):
            replaceCharOnBoard(ARM, RIGHT_ARM_COORD);
            return;
        case(6):
            replaceCharOnBoard(LEFT_LEG, LEFT_LEG_COORD);
            return;
        case(7):
            replaceCharOnBoard(RIGHT_LEG, RIGHT_LEG_COORD);
            return;
        default:
            return;
            // TODO: Throw error
    }
}

