#include "Zombie.h"
#include<string>

Zombie::Zombie(){
    this->name = "Zombie";
    this->loses = {{"Ninja",1},{"Robot",1},{"Monkey",0},{"Pirate",0}};
}

std::string Zombie::getName() {
    return this->name;
}

std::unordered_map<std::string,int> Zombie::getlosses() {
    return this->loses;
}