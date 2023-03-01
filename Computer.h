#ifndef COMPUTER_H
#define COMPUTER_H

#include<string>
#include"Player.h"

class Computer: public Player{
public:
    std::string Name;
    Computer();
    char makeMove();
    std::string getName();
};


#endif //COMPUTER_H