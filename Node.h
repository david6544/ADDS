#ifndef NODE_H
#define NODE_H

#include<unordered_map>

struct Node
{
    char letter;
    bool isWord;
    //using hashmap for space optimisation and O(1) search
    // unordered_map is implemented using linked lists anyway so ease of use instead of optimising ll operations on my own
    std::unordered_map<char,Node*> children;
};

#endif // NODE_H
