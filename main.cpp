#include <iostream>
#include "randomWord.h"
#include "letterBox.h"


int main()
{

    LetterBox box;
    char someletters[2] = {'1', '2'};
    box.displayLetters(someletters, 2);
    std::cout << std::endl;

    char aLotOfletters[20] = {'T', 'T',  'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T',};
    box.displayLetters(aLotOfletters, 20);

    std::cout << std::endl;

    char letters[5] = {'a', 'b', 'c', 'd', 'e'}; 
    box.displayLetters(letters, 5);

    std::cout << std::endl;

        return 0;
}
