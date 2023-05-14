#ifndef PREFIXNODE_H
#define PREFIXNODE_H

#include<unordered_map>

struct prefixNode
{
    char letter;
    bool isWord;
    int routerNo;
    std::unordered_map<char, prefixNode*> children;
};


#endif // PREFIXNODE_H
