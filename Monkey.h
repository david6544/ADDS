#ifndef MONKEY_H
#define MONKEY_H
#include"Move.h"

class Monkey: public Move {
public:
    std::string name;
    std::unordered_map<std::string,int> loses;
    Monkey();
    std::string getName();
    std::unordered_map<std::string,int> getlosses();
};



#endif // MONKEY_H
