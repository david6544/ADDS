#ifndef NODE_H
#define NODE_H

#include<unordered_map>

struct Node
{
    char letter;
    bool isWord;
    std::unordered_map<char, Node*> children;
};


#endif // NODE_H
