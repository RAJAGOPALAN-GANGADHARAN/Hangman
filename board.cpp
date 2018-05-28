#include "board.h"

void Board::addNextLimb(){
    //TODO: Find a beetter way to do this
    limbsAttached++;

    switch(limbsAttached){
        case(1):
            replaceCharOnBoard(ROPE, ROPE_COORD);
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

void Board::replaceCharOnBoard(const char &ch, const Point &coord){
    board[coord.x][coord.y] = ch; 
}

std::ostream& operator<<(std::ostream &os, const Board &bo){
    for (short row = 0; row < bo.BOARD_WIDTH; row++){
        for (short col = 0; col < bo.BOARD_HEIGHT; col++){
            std::cout << bo.board[row][col];
        }
        std::cout << std::endl;
    }
    return os;
}

