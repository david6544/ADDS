#include"Player.h"
#include"Human.h"
#include"Computer.h"
#include"Referee.h"

#include<iostream>
#include<string>


int main(void) {


    Referee* ref = new Referee();
    Human p1("John");
    Computer c1;

    Player* winner = ref->refGame(&p1,&c1);

    std::cout <<  winner->getName() << std::endl;
    



    return 0;
}