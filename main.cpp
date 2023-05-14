#include"Trie.h"

#include<vector>
#include<iostream>
#include<string>

using namespace std;


int main(void) {
    string word = "hello";
    string word2 = "help";
    string word3 = "hi";
    string word4 = "height";


    Trie* trie = new Trie();
    //cout << "test" <<endl;

    //std::cout << trie->Root->letter << std::endl;


    trie->insert(word);
    trie->insert(word2);
    trie->insert(word3);
    trie->insert(word4);



    vector<string> res = trie->getSuggestions("hel");

    for (auto x : res) {
        cout << x << endl;
    }

    return 0;
}