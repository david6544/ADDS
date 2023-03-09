#ifndef NINJA_H
#define NINJA_H
#include"Move.h"

class Ninja: public Move {
public:
    std::string name;
    std::unordered_map<std::string,int> loses;
    Ninja();
    std::string getName();
    std::unordered_map<std::string,int> getlosses();
};

#endif // NINJA_H
