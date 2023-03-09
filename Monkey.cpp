#include "Monkey.h"
#include<string>

Monkey::Monkey(){
    this->name = "Monkey";
    this->loses = {{"Pirate",1},{"Zombie",1}};
}

std::string Monkey::getName() {
    return this->name;
}

std::unordered_map<std::string,int> Monkey::getlosses() {
    return this->loses;
}
