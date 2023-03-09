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
    

    //std::cout << p1->getName() << " plays " << m1->getName() << std::endl;
    //std::cout << p2->getName() << " plays " << m2->getName() << std::endl;
    //std::cout << m1->getlosses().size() << " " << m2->getlosses().size() << std::endl;

    //Checks which player wins
    if (m2->getlosses().find(m1->getName()) != m2->getlosses().end() && m2->getlosses().at(m1->getName()) == 1) return p1;
    else if (m1->getlosses().find(m2->getName()) != m1->getlosses().end() && m1->getlosses().at(m2->getName()) == 1) return p2;
    else {
        return nullptr;
    }
    return nullptr;
}