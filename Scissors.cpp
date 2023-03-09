#include "Scissors.h"

Scissors::Scissors(){
    this->name = "Scissors";
    this->loses = {{"Rock",1}};
}

std::string Scissors::getName(){
    return this->name;
}

std::unordered_map<std::string,int> Scissors::getlosses() {
    return this->loses;
}
