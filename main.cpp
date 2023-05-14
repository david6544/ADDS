#include"Autocomplete.h"
#include"PrefixMatcher.h"

#include<vector>
#include<iostream>
#include<string>

using namespace std;


int main(void) {
    string word = "hello";
    string word2 = "help";
    string word3 = "hi";
    string word4 = "height";


    Autocomplete* trie = new Autocomplete();
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


    PrefixMatcher* ptrie = new PrefixMatcher;

    string w = "11001101";
    string w1 = "110011011";
    string w2 = "110011011101";


    ptrie->insert(w,3);
    ptrie->insert(w1,2);
    ptrie->insert(w2,1);

    std::cout << ptrie->selectRouter(w1) << std::endl;


    return 0;
}