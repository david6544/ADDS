#ifndef SCISSORS_H
#define SCISSORS_H

#include "Move.h"

class Scissors: public Move {
public:
    std::string name;
    std::unordered_map<std::string,int> loses;
    Scissors();
    std::string getName();
    std::unordered_map<std::string,int> getlosses();
};


#endif // SCISSORS_H
