#ifndef MOVE_H
#define MOVE_H
#include<string>
#include<unordered_map>


class Move {
public:
    std::string name;
    virtual std::string getName() = 0;
    std::unordered_map<std::string,int> loses;
    virtual std::unordered_map<std::string,int> getlosses() = 0;
};

#endif // MOVE_H
