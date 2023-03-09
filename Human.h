#ifndef HUMAN_H
#define HUMAN_H

#include<string>
#include"Player.h"

class Human: public Player{
    private:
        std::string Name;
    public:
        Movelist* mvlist;
        Human();
        Human(std::string name);
        Move* makeMove();
        std::string getName();
};


#endif //HUMAN_H