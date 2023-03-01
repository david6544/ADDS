#ifndef HUMAN_H
#define HUMAN_H

#include<string>
#include"Player.h"

class Human: public Player{
public:
    std::string Name;

    Human();
    Human(std::string name);
    char makeMove();
    std::string getName();
};


#endif //HUMAN_H