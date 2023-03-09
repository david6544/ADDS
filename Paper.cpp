#include "Paper.h"

Paper::Paper(){
    loses = {
        {"Scissors",1},
    };
    name = "Paper";
}

std::string Paper::getName(){
    return this->name;
}

std::unordered_map<std::string,int> Paper::getlosses() {
    return this->loses;
}
