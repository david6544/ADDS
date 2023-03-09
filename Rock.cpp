#include "Rock.h"
#include<string>

Rock::Rock(){
    this->name = "Rock";
    this->loses = {{"Paper",1}};
}

std::string Rock::getName() {
    return this->name;
}

std::unordered_map<std::string,int> Rock::getlosses() {
    return this->loses;
}