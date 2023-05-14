#ifndef TRIE_H
#define TRIE_H

#include"Node.h"
#include<string>
#include<vector>

class Trie
{
private:
public:
    Node* Root;
    Trie();
    ~Trie();

    void insert(std::string word);
    std::vector<std::string> getSuggestions(std::string partialWord);

};


#endif // TRIE_H
