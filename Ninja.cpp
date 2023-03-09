#include "Ninja.h"
#include<string>

Ninja::Ninja(){
    this->name = "Ninja";
    this->loses = {{"Robot",1},{"Monkey",1}};
}

std::string Ninja::getName() {
    return this->name;
}

std::unordered_map<std::string,int> Ninja::getlosses() {
    return this->loses;
}