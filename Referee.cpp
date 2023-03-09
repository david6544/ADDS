#include"Player.h"
#include"Referee.h"
#include<string>
#include<iostream>
#include<unordered_map>
#include"Move.h"

Referee::Referee() {

}

Player* Referee::refGame(Player * p1, Player * p2) {

    Move* m1 = p1->makeMove();
    Move* m2 = p2->makeMove();
    

    //std::cout << m1->getName() << " " << m2->getName() << std::endl;
    //std::cout << m1->getlosses().size() << " " << m2->getlosses().size() << std::endl;

    //Checks which player wins
    if (m2->getlosses().find(m1->getName()) != m2->getlosses().end()) return p1;
    if (m1->getlosses().find(m2->getName()) != m1->getlosses().end()) return p2;
    return nullptr;
}