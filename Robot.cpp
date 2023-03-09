#include "Robot.h"
#include<string>

Robot::Robot(){
    this->name = "Robot";
    this->loses = {{"Pirate",1},{"Monkey",1}};
}

std::string Robot::getName() {
    return this->name;
}

std::unordered_map<std::string,int> Robot::getlosses() {
    return this->loses;
}

