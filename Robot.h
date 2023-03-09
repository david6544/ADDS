#ifndef ROBOT_H
#define ROBOT_H
#include"Move.h"

class Robot: public Move {
public:
    std::string name;
    std::unordered_map<std::string,int> loses;
    Robot();
    std::string getName();
    std::unordered_map<std::string,int> getlosses();
};



#endif // ROBOT_H
