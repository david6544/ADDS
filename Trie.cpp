#include "Trie.h"

#include<iostream>

Trie::Trie() {
    Node* root = new Node;
    root->letter = ' ';
    root->isWord = false;
    this->Root = root;
}

Trie::~Trie() {
}

void Trie::insert(std::string word) {

    //std::cout << " teowfne";
    Node* curr = this->Root;
    //if (curr == nullptr) {std::cout << "tesgaodinf";}
    for (int i = 0; i < word.size(); i++) {
        if (curr == nullptr || curr->children[word[i]] == nullptr) {

            //creating a new node
            Node* newletter = new Node;
            newletter->letter = word[i];
            newletter->isWord = false;
            curr->children[word[i]] = newletter;
            curr = newletter;

        // iterating through the nodes
        } else {
            curr = curr->children[word[i]];
        }
        //std::cout << i << std::endl;
    }

    curr->isWord = true;
    
    return;
}

void dfs(Node* currNode,std::string partialWord, std::vector<std::string>& res) {
    if (currNode->isWord) {
        res.push_back(partialWord);
    }
    
    //std::cout << currNode->letter << std::endl;

    for (auto i : currNode->children) {
        if (i.second != nullptr) {
            dfs(i.second, partialWord + i.second->letter, res);
        }
    }
}


std::vector<std::string> Trie::getSuggestions(std::string partialWord) {
    Node* curr = this->Root;

    //std::cout << "tes2" << std::endl;

    //Run dfs on the trie to find all words that start with partialWord
    for (int i = 0; i < partialWord.size(); i++) {
        if (curr == nullptr || curr->children[partialWord[i]] == nullptr) {
            return {};
        } else {
            curr = curr->children[partialWord[i]];
        }
    }



    std::vector<std::string> suggestions;

    dfs(curr, partialWord,suggestions);


    return suggestions;
}


