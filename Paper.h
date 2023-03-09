#ifndef PAPER_H
#define PAPER_H
#include"Move.h"


class Paper: public Move {
public:
    std::string name;
    std::unordered_map<std::string,int> loses;
    Paper();
    std::string getName();
    std::unordered_map<std::string,int> getlosses();
};


#endif // PAPER_H
