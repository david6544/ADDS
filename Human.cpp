#include"Human.h"
#include<string>
#include<iostream>

Human::Human() {
    this->Name = "Human";
    mvlist = new Movelist;
}

Human::Human(std::string name) {
    this->Name = name;
    mvlist = new Movelist;
}

Move* Human::makeMove() {
    std::string namedMove;
    std::cout << "Make Move: ";
    std::cin >> namedMove;
    Move* humanMove = mvlist->checkValidMove(namedMove);
   //std::cout << "test human" << std::endl;
    return humanMove;
}

std::string Human::getName() {
    return Name;
}