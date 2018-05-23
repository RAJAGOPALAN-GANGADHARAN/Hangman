#include "randomWord.h"

RandomWord::RandomWord(){
    // Must seed for shuffle to work randomly
    srand(time(NULL));
    shuffleWordFromPredefinedWords();
}

RandomWord::~RandomWord(){

}

// TODO: This method is merely temporary until I can get stuff from online
void RandomWord::shuffleWordFromPredefinedWords(){
    int ONE_THROUGH_NINE = rand() % 10; 
    this->word = predefinedWords[ONE_THROUGH_NINE]; 
}

void RandomWord::shuffleWord(){
    //TODO
}

void RandomWord::shuffleWordWithLength(unsigned int length){
    //TODO
}

std::string RandomWord::getWord() { return word; }

// Operator overload
std::ostream& operator <<(std::ostream& os, const RandomWord& randWord){
    os << randWord.word;
    return os;
}

