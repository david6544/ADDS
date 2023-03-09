#include"Movelist.h"
#include"Move.h"
#include<iostream>

Movelist::Movelist(){
    allmoves = {
        {"Rock",&R1},
        {"Paper",&P1},
        {"Scissors",&S1},
        {"Robot",&RB1},
        {"Pirate",&PR1},
        {"Ninja",&N1},
        {"Monkey",&M1},
        {"Zombie",&Z1},
    };
}

Move* Movelist::checkValidMove(std::string playermove) {
    //std::cout << allmoves[playermove]->getName() << std::endl;
    return allmoves[playermove];
}
