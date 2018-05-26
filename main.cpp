#include <iostream>
#include "randomWord.h"

int main()
{
    RandomWord hgmnWord;
    char board[9][13] = 
    {{' ', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', ' '},
     {' ', '|', '.', '_', '_', '_', '_', '_', '_', '_', '.', '|', ' '},
     {' ', '|', '|', ' ', ' ', ' ', '|', ' ', ' ', ' ', '|', '|', ' '},
     {' ', '|', '|', ' ', ' ', ' ', 'o', ' ', ' ', ' ', '|', '|', ' '},
     {' ', '|', '|', ' ', ' ', '-', '|', '-', ' ', ' ', '|', '|', ' '},
     {' ', '|', '|', ' ', ' ', '/', ' ', '\\', ' ', ' ', '|', '|', ' '},
     {' ', '|', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', '|', ' '},
     {'_', '|', '|', '_', '_', '_', '_', '_', '_', '_', '|', '|', '_'},
     {' ', '|', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', '|', ' '}};

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            std::cout << board[i][j];
        }
        std::cout << std::endl;
    }

    std::cout << "Hello, world!" << std::endl;
    return 0;
}