/************
TODO: Find way of shuffling words from online source
TODO: Get rid of shuffleWordFromPRedefinedWords() and predefinedWords
************/
#ifndef RANDOMWORD_H
#define RANDOMWORD_H

#include <array>  //TODO: Nessicary?
#include <cstdlib>            // srand(), rand()
#include <ctime>              // time(NULL)

class RandomWord{
public:

    // Constructor / Destructor
    RandomWord();
    ~RandomWord();

    // Methods
    void shuffleWordFromPredefinedWords(); // Momentary method, soon I'll figure out how to get it from online source
    void shuffleWord();
    void shuffleWordWithLength(unsigned int length);
    
    // Accessors
    std::string getWord();

    // Operator Overload
    friend std::ostream& operator <<(std::ostream& os, 
                                    const RandomWord& randWord);

private:
    std::string word;
    
    // TODO: Gotta get rid of this  
    std::string predefinedWords[10] =
    {"Monkey",
     "Jazz",
     "Zebra",
     "Rainbow",
     "Smooth criminal",
     "Hello Beautiful World",
     "Ignore The And&",
     "Jacob",
     "a",
     "Ten"};

};

#endif

