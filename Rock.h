#ifndef ROCK_H
#define ROCK_H
#include "Move.h"

class Rock: public Move {
public:
    std::string name;
    std::unordered_map<std::string,int> loses;
    Rock();
    std::string getName();
    std::unordered_map<std::string,int> getlosses();
};

#endif // ROCK_H
