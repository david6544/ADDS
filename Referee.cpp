#include"Player.h"
#include"Referee.h"
#include<string>
#include<iostream>
#include<unordered_map>

Referee::Referee() {

}

Player* Referee::refGame(Player * p1, Player * p2) {
    
    std::unordered_map<char,char> moves {
        {'R','P'},
        {'S','R'},
        {'P','S'}
    };

    char m1 = p1->makeMove();
    char m2 = p2->makeMove();

    //std::cout << m1 << " " << m2 << std::endl;

    if (m1 == m2) return nullptr;


    if (m2 == moves[m1]) {
        return p2;
    } else {
        return p1;
    }

    return nullptr;
}