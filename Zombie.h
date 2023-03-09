#ifndef ZOMBIE_H
#define ZOMBIE_H
#include"Move.h"

class Zombie: public Move {
public:
    std::string name;
    std::unordered_map<std::string,int> loses;
    Zombie();
    std::string getName();
    std::unordered_map<std::string,int> getlosses();
};

#endif // ZOMBIE_H
