#ifndef PLAYER_H
#define PLAYER_H

#include<string>
#include"Move.h"
#include"Movelist.h"

class Player {
public:
    Movelist* mvlist;
    virtual Move* makeMove() = 0;
    virtual std::string getName() = 0;
};


#endif //PLAYER_H