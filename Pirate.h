#ifndef PIRATE_H
#define PIRATE_H
#include"Move.h"

class Pirate: public Move {
public:
    std::string name;
    std::unordered_map<std::string,int> loses;
    Pirate();
    std::string getName();
    std::unordered_map<std::string,int> getlosses();
};

#endif // PIRATE_H
