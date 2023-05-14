#include "PrefixMatcher.h"
#include<climits>

PrefixMatcher::PrefixMatcher() {
    prefixNode* root = new prefixNode;
    root->letter = ' ';
    root->routerNo = INT_MIN;
    root->isWord = false;
    this->Root = root;

}

PrefixMatcher::~PrefixMatcher()
{
}

void PrefixMatcher::insert(std::string address, int routerNumber){
    prefixNode* curr = this->Root;   

    for (int i = 0; i < address.size(); i++) {
        if (curr == nullptr || curr->children[address[i]] == nullptr) {
            prefixNode* newletter = new prefixNode;
            newletter->letter = address[i];
            newletter->routerNo = INT_MIN;
            curr->children[address[i]] = newletter;
            curr = newletter;
        } else {
            curr = curr->children[address[i]];
        }
    } 

    curr->routerNo = routerNumber;
    curr->isWord = true;

    return;
}

int PrefixMatcher::selectRouter(std::string networkAddress) {
    //Go down prefix path and find the deepest node which matches

    int counter = 0;
    int res = 0;
    
    prefixNode* curr = this->Root;   

    while (curr->children[networkAddress[counter]] != nullptr) {
        curr = curr->children[networkAddress[counter]];
        counter++;
        if (curr->routerNo > INT_MIN) {
            res = curr->routerNo;
        }
        //std::cout << counter << " ";
    }
    return res;
}

