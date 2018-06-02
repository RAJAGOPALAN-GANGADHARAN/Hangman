#include <iostream>
#include "hangman.h"

int main()
{
    Hangman game("Cat");
    
    game.guessLetter('p');
    return 0;
}

