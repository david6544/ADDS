#include "Pirate.h"
#include<string>

Pirate::Pirate(){
    this->name = "Pirate";
    this->loses = {{"Ninja",1},{"Zombie",1}};
}

std::string Pirate::getName() {
    return this->name;
}

std::unordered_map<std::string,int> Pirate::getlosses() {
    return this->loses;
}