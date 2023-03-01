#include"Player.h"
#include"Referee.h"
#include<string>
#include<iostream>

Referee::Referee() {

}

Player* Referee::refGame(Player * human, Player * comp) {
        
    char move = human->makeMove();

    if (move == 'P') {
        return comp;
    } if (move == 'S') {
        return human;
    }

    return nullptr;
}