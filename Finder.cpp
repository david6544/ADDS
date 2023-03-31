#include "Finder.h"
#include<iostream>

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
    vector<int> res (s2.size(), -1);
    int startpos = 0;
    for (size_t i = 1; i <= s2.size(); i++) {
        
        size_t found = s1.find(s2.substr(0,i),startpos);
        if (found != string::npos) {
            res[i-1] = found;
            startpos = found;
        } else {
            return res;
        }

    }
    return res;
}

 /* 
int main(void) {
    std::string s1 = "4634554567";
    std::string s2 = "45689";
    
    Finder f1;

    std::vector<int> res = f1.findSubstrings(s1,s2);


    for (int i = 0; i < res.size(); i++) {
        std::cout << res[i] << " ";
    }

    return 0;
} */