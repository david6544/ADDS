#ifndef COMPUTER_H
#define COMPUTER_H

#include<string>
#include"Player.h"

class Computer: public Player{
public:
    std::string Name;
    Movelist* mvlist;
    Computer();
    Move* makeMove();
    std::string getName();
};


#endif //COMPUTER_H