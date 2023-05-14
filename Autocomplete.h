#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include"Node.h"
#include<string>
#include<vector>

class Autocomplete
{
private:
    Node* Root;
public:
    Autocomplete();
    ~Autocomplete();

    void insert(std::string word);
    std::vector<std::string> getSuggestions(std::string partialWord);

};


#endif // AUTOCOMPLETE_H
