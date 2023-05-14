#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include"prefixNode.h"
#include<string>

class PrefixMatcher
{
private:
    prefixNode* Root;
public:
    PrefixMatcher();
    ~PrefixMatcher();

    void insert(std::string address, int routerNumber); // add a router address

    int selectRouter(std::string networkAddress);  // return the router with the longest matching prefix


};


#endif // PREFIXMATCHER_H
