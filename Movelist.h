#ifndef MOVELIST_H
#define MOVELIST_H
#include<unordered_map>
#include<string>
#include"Move.h"
#include"Rock.h"
#include"Paper.h"
#include"Scissors.h"
#include"Monkey.h"
#include"Robot.h"
#include"Zombie.h"
#include"Pirate.h"
#include"Ninja.h"


class Movelist
{
public:
    std::unordered_map<std::string,Move*> allmoves;
    Rock R1;
    Paper P1;
    Scissors S1;
    Robot RB1;
    Monkey M1;
    Zombie Z1;
    Ninja N1;
    Pirate PR1;
    Movelist();
    Move* checkValidMove(std::string);
};

#endif // MOVELIST_H
