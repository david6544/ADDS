#include"Computer.h"
#include<string>
#include<iostream>
#include"Rock.h"

Computer::Computer() {
    this->Name = "Computer";
    mvlist = new Movelist;
}

Move* Computer::makeMove() {
    std::string Cmove = "Rock";
    Move* Compmove = mvlist->checkValidMove(Cmove);
    //std::cout << Compmove->getName() << std::endl;
    return Compmove;
}

std::string Computer::getName() {
    return this->Name;
}