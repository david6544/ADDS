#include"Finder.h"
#include<string>
#include<iostream>
#include<vector>



int main(void) {
    std::string s1 = "4634554567";
    std::string s2 = "45689";
    
    Finder f1;

    std::vector<int> res = f1.findSubstrings(s1,s2);


    for (int i = 0; i < res.size(); i++) {
        std::cout << res[i] << " ";
    }

    return 0;
}
