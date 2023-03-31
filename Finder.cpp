#include "Finder.h"
#include<iostream>

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
    vector<int> res (s2.size(), -1);
    //if (s1.size() == 0 || s2.size() == 0) return res;

    /* for (size_t i = 1; i <= s2.size(); i++) {
            string curr = s2.substr(0,i);

            int startpoint = res[i-1];
            if (startpoint == -1) startpoint = 0;

            for (int j = startpoint; j < s1.size() - curr.size(); j++) {
                cout << s1.substr(j,curr.size()) << endl;
                if (curr == s1.substr(j,curr.size())) {
                    res[i-1] = j;
                    break;
                }
            }

    } */

    for (size_t i = 1; i <= s2.size(); i++) {
        size_t found = s1.find(s2.substr(0,i));

        if (found != string::npos) {
            res[i-1] = found;
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